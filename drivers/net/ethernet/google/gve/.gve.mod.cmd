savedcmd_drivers/net/ethernet/google/gve/gve.mod := printf '%s\n'   gve_main.o gve_tx.o gve_tx_dqo.o gve_rx.o gve_rx_dqo.o gve_ethtool.o gve_adminq.o gve_utils.o gve_flow_rule.o | awk '!x[$$0]++ { print("drivers/net/ethernet/google/gve/"$$0) }' > drivers/net/ethernet/google/gve/gve.mod