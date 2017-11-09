read -p "请输入要开的端口号:" port
read -p "请输入要开的协议:" protocol
firewall-cmd --zone=public --add-port=$port/$protocol
