savedcmd_net/ethtool/built-in.a := rm -f net/ethtool/built-in.a;  printf "net/ethtool/%s " ioctl.o common.o netlink.o bitset.o strset.o linkinfo.o linkmodes.o rss.o linkstate.o debug.o wol.o features.o privflags.o rings.o channels.o coalesce.o pause.o eee.o tsinfo.o cabletest.o tunnels.o fec.o eeprom.o stats.o phc_vclocks.o mm.o module.o cmis_fw_update.o cmis_cdb.o pse-pd.o plca.o phy.o | xargs ar cDPrST net/ethtool/built-in.a