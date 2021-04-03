#!/bin/bash

wget -qO - https://download.sublimetext.com/sublimehq-pub.gpg | sudo apt-key add -
echo "deb https://download.sublimetext.com/ apt/stable/" | sudo tee /etc/apt/sources.list.d/sublime-text.list

sudo apt-get -y update
sudo apt-get -y dist-upgrade
sudo apt-get -y install apt-transport-https
sudo apt-get -y install gnome-session gdm3 gnome-tweak-tool numix-icon-theme-circle 
sudo apt-get -y install htop mc git build-essential vim sublime-text
sudo apt-get -y autoremove
sudo apt-get -y clean

cp -r extra/.vim* "$HOME"

exit 0