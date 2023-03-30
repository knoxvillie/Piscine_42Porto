#!/bin/sh
id -nG $FT_USER | tr -s ' ' ',' | tr -d '\n'

