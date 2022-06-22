#!/bin/sh
ifconfig | grep "ether" | sed 's/ether //' | cut -c 9- | cut -d ' ' -f 1
