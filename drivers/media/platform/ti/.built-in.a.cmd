savedcmd_drivers/media/platform/ti/built-in.a := rm -f drivers/media/platform/ti/built-in.a;  printf "drivers/media/platform/ti/%s " am437x/built-in.a cal/built-in.a vpe/built-in.a davinci/built-in.a j721e-csi2rx/built-in.a omap/built-in.a omap3isp/built-in.a | xargs ar cDPrST drivers/media/platform/ti/built-in.a