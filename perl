#!/usr/bin/env perl

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

use strict;
use warnings;
use Getopt::Long;

# -----------------------------------------------------------------------------------------------------------------------------
# VARIABLES
# -----------------------------------------------------------------------------------------------------------------------------

my $arg;

# -----------------------------------------------------------------------------------------------------------------------------
# FUNCTIONS
# -----------------------------------------------------------------------------------------------------------------------------

sub usage {

    printf "Usage usage [-h <help>] [-a <argument>]\n";
    printf "-a <argument>: %s\n", $arg;

    exit 0;

}

# -----------------------------------------------------------------------------------------------------------------------------
# MAIN
# -----------------------------------------------------------------------------------------------------------------------------

sub main {

    GetOptions(
        
        "help|h" => \&usage,
        "a=s"    => \$arg

    );

    printf "Argument: %s\n", $arg;

}

main()

# cursor: 5 del
