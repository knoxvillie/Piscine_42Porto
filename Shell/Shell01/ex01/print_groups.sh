#!/bin/sh
groups $FT_USER | tr -s ' ' ',' | awk '{print$0}'
