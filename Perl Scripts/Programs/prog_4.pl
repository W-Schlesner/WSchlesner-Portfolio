#!/usr/bin/perl

use strict;
use warnings;

# Input and output filenames
my $input_file = 'input_file.txt';
my $output_file = 'prog_4_output.txt';

# Open the input file for reading ('<')
open my $in_fh, '<', $input_file
    or die "Cannot open file $input_file for reading: $!";

# Open the output file for writing ('>')
open my $out_fh, '>', $output_file
    or die "Cannot open file $output_file for writing: $!";

# Iterate over the lines of the file and display the results to the terminal
while (defined(my $line = <$in_fh>)) {

    # Remove the trailing newline character
    chomp($line);

    # Print the line to the output file
    print $out_fh "$line\n";
}

# Close the input and output filehandles
close $in_fh;
close $out_fh;
