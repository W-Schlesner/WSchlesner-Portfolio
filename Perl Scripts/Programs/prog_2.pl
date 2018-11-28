#!/usr/bin/perl

use strict;
use warnings;

# Output filename
my $output_file = 'prog_2_output.txt';

# Open the output file for writing ('>')
open my $out_fh, '>', $output_file
    or die "Cannot open file $output_file for writing: $!";

# Define a list of strings
my @list = (
    'foo',
    'bar',
    'baz',
    'qux',
);

# Iterate over the entries of the list and print each to the output file
foreach my $string (@list) {
    print $out_fh "$string\n";
}

# Close the output filehandle
close $out_fh;
