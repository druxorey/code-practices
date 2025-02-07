#!/bin/bash

function main() {
	echo -e "\n\e[0;35m[========= INVERTED NUMBER =========]\e[0m\n"

	read -p "Enter a number: " number
	inverted=$(echo "$number" | rev)

	echo -e "Inverted number: \e[0;32m$inverted\e[0m\n"
}

main $@
