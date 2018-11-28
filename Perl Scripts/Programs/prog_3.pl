#!/usr/bin/perl

use strict;
use warnings;

# Input filename
my $input_file = 'input_file.txt';

# Open the input file for reading ('<')
open my $in_fh, '<', $input_file
    or die "Cannot open file $input_file for reading: $!";

# Iterate over the lines of the file and display the results to the terminal
while (defined(my $line = <$in_fh>)) {

    # Remove the trailing newline character
    chomp($line);

    # Print the line to standard output
    print "$line\n";
}

# Close the input filehandle
close $in_fh;
