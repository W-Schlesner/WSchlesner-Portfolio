#!/usr/bin/perl

use strict;
use warnings;

# Input filename
my $input_file = 'input_file.txt';

# The amount of bytes to be skipped
my $skip_bytes_num = 40;

# Open the input file for reading ('<')
open my $in_fh, '<', $input_file
    or die "Cannot open file $input_file for reading: $!";

# Get the current position in the filehandle (by default, the current position is the beginning of the file)
my $current_pos = tell($in_fh);

# Skip the number of bytes specified in $skip_bytes_num at the current position in the filehandle
seek($in_fh, $current_pos + $skip_bytes_num, 0);

# Iterate over the lines of the file and display the results to the terminal
while (defined(my $line = <$in_fh>)) {

    # Remove the trailing newline character
    chomp($line);

    # Print the line to standard output
    print "$line\n";
}

# Close the input filehandle
close $in_fh;
