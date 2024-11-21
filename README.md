
Please refer to following file to find the diff ( changes ) to linux kernel to get kvm exit statistics

[linux-kernel-changes.diff](linux-kernel-changes.diff)
# linux-kvm-project
KVM Statistics linux repo .

Questions – Provide answers in a README.md in the root of your repo.
1. For each member in your team, provide 1 paragraph detailing what parts of the lab that member
implemented / researched. (You may skip this question if you are doing the lab by yourself).
--> Doing it alone.
2. Describe in detail the steps you used to complete the assignment. Consider your reader to be someone
skilled in software development but otherwise unfamiliar with the assignment. Good answers to this
question will be recipes that someone can follow to reproduce your development steps.
--> Steps to accomplish this assignment:

   1. Forked the master linux Github repository at https://github.com/torvalds/linux to my githib repository.
   2. Cloned the forked repository onto my outer VM named VM1 in the GCP ssh terminal of VM1.
   3. Installed neccasary tools using
        sudo apt update && sudo apt upgrade -y
        sudo apt install -y build-essential libncurses-dev bison flex libssl-dev libelf-dev git. 
   4. Configure the Kernel
        make menuconfig  (This opens a menu-driven interface to select options to configure )
   5. Build the Kernel
        make -j$(nproc)
        make modules_install
        make install
        mkinitramfs -o /boot/initrd.img-$(make kernelrelease)
   6. Created Snapshot of my VM1 to safeguard against boot issues
        GCP > Compute Engine > VM instances > vm1 > Snapshots
   7. Modify KVM Source Code to get the KVM Exits so go to that location (It's likely in arch/x86/kvm/vmx/vmx.c)
   8. Modify the exit handler:
        1.Add counters for each exit type
        2.Add code to print statistics every 10,000 exits
        --> printk(KERN_INFO "KVM: VMX exit occurred\n");
            struct vcpu_vmx *vmx = to_vmx(vcpu);
            int exit_type = vmx->exit_reason.basic;
            long total = atomic_inc_return(&total_exits);
            if (exit_type < 65)
                atomic_inc(&exit_counters[exit_type]);
            if (total % 10000 == 0) {
                int i;
                for (i = 0; i < 65; i++) {
                        int count = atomic_read(&exit_counters[i]);
                        if (count > 0) {
                                printk(KERN_INFO "KVM exit %d (%s): %d\n", i, exit_reason_str(i), count);
                           }
                  }
           }
   9. Rebuild and install the modified kernel
          make -j$(nproc)
          make modules_install
          make install
   10. Update the bootloader
          update-grub
   11. Boot the inner VM
          sudo qemu-system-x86_64 -enable-kvm -hda debian_squeeze_amd64_standard.qcow2 -m 512 -net nic -net 
   12. Welcome prompt appears for inner vm
   13. Open the new ssh terminal for vm1
   14. go to linux directory
          cd linux
   15. Enter this command :- sudo dmesg | grep "KVM exit" ( below ouput shows the kVM exit counts and reason)
          [13967.101229] KVM exit 0 (EXCEPTION_NMI): 33
          [13967.106829] KVM exit 1 (EXTERNAL_INTERRUPT): 34321
          [13967.113300] KVM exit 7 (INTERRUPT_WINDOW): 305428
          [13967.119514] KVM exit 10 (CPUID): 1681
          [13967.124709] KVM exit 28 (CR_ACCESS): 16214
          [13967.130316] KVM exit 29 (UNKNOWN): 1
          [13967.135401] KVM exit 30 (I/O_INSTRUCTION): 1419909
          [13967.141698] KVM exit 31 (RDMSR): 43
          [13967.146697] KVM exit 32 (WRMSR): 108
          [13967.151782] KVM exit 48 (EPT_VIOLATION): 7449
          [13967.157785] KVM exit 49 (EPT_MISCONFIG): 4806
          [13967.163634] KVM exit 54 (WBINVD): 7
   16. Some of the make commands might not work in the rare case, please add sudo before commands and try it.
   
  

3. Comment on the frequency of exits – does the number of exits increase at a stable rate? Or are there
more exits performed during certain VM operations? Approximately how many exits does a full VM
boot entail?
   1. --> Frequency of exits:
   I/O_INSTRUCTION (Exit 30) : this is the most frequent exit type which has occured every time i saw as VM is performing more I/O operation,and then INTERRUPT_WINDOW (Exit 7) is next highest i saw, as VM is needed to sync with the host, as VM frequently waits for interupts. External interrupts, Control register accesses for context switching, the CPUID instruction and other exits have low frequency comparing others, this is what i have seen during this assignment.
   2. --> does the number of exits increase at a stable rate? Or are there more exits performed during certain VM operations?
  Yes , some of the exits like INTERRUPT_WINDOW (7) and EXTERNAL_INTERRUPT (1) have stable rate because of the constant periodic hardware events like timer interrupts.
  While exits like  I/O_INSTRUCTION (30) and CPUID (10), don't have stable rate , may spike during specific VM operations like booting or handling I/O-heavy workloads. As conclusion, The number of KVM exits depends on workload and specific VM operations being performed.
   3. --> Approximately how many exits does a full VM boot entail?
  A full VM boot entails approximately 2 million KVM exits, this high number is primarily driven by I/O operations (I/O_INSTRUCTION) and interrupt handling (INTERRUPT_WINDOW), which are typical during the initialization and configuration phases of a virtual machine boot process.

   
4. Of the exit types, which are the most frequent? Least?
   1. Most Frequent:
      1. I/O_INSTRUCTION (Exit 30) -> Count: 1,419,909 exits
      2. INTERRUPT_WINDOW (Exit 7) -> Count: 305,428 exits
      3. EXTERNAL_INTERRUPT (Exit 1) -> count: 34,321 exits
   2. Least frequent :
        1. UNKNOWN (Exit 29) -> count : 1 exit
        2. WBINVD (Exit 54) -> count: 7 exits
        3.  EXCEPTION_NMI (Exit 0) -> count : 33 exits
        
     
   [Assigment documentation](CMPE283 _ Virtualization_Assignment 2.pdf)
   [a relative link](CMPE283%20_%20Virtualization_Assignment%202.pdf)
