#!/bin/env bash

# -----------------------------------------------------------------------------------------------------------------------------
# GENERAL
# -----------------------------------------------------------------------------------------------------------------------------
#
# author: Sebastiaan Van Hoecke
# mail: sebastiaan@sevaho.io
#
# NOTE: 
#
# -----------------------------------------------------------------------------------------------------------------------------

# -----------------------------------------------------------------------------------------------------------------------------
# GLOBAL VARIABLES
# -----------------------------------------------------------------------------------------------------------------------------

ARG1=

# -----------------------------------------------------------------------------------------------------------------------------
# FUNCTIONS
# -----------------------------------------------------------------------------------------------------------------------------

check_args () {

    if [[ "$#" -eq "0" ]]; then

        usage

    fi

    while getopts :ab:c: opt; do

        case $opt in

            a)  echo "a preseed";;
            b)  echo "$OPTARG";;
            c)  ARG1="$OPTARG";;
            ?)  usage;; 

        esac

    done

    shift "$(expr $OPTIND - 1)"

}

usage () {

    local usage="
    Usage: ${0} [OPTIONS]... [ARGS]...

        description


    OPTIONS:

        -h, *           display the help and exit

    EXAMPLES:

    NOTE:
    "

    echo "$usage"

    exit 0

}

# -----------------------------------------------------------------------------------------------------------------------------
# MAIN
# -----------------------------------------------------------------------------------------------------------------------------

main () {

    local var1=

    check_args "${@}"

}

main "${@}"
