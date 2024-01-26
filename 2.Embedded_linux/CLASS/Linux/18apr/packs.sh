#!/bin/bash
read -p "Enter Package Name Which You Want To Install : " packs
sudo apt install $packs
chmod 700 packs.sh
echo " Package Successfully Installed...!!!!! "
