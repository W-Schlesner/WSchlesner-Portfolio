#!/usr/bin/perl

use strict;
use warnings;

# Output filename
my $output_file = 'prog_1_output.txt';

# Open the output file for writing ('>')
open my $out_fh, '>', $output_file
    or die "Cannot open file $output_file for writing: $!";

while (1) {

    # Display a prompt message to the user
    print "Insert input: ";

    # Read user input
    my $input = <STDIN>;

    # Remove the trailing newline from the input
    chomp($input);

    # Break the loop if the input is "exit"
    last if $input eq 'exit';

    # Print the user input to the ouput file
    print $out_fh "$input\n";
}

# Close the output filehandle
close $out_fh;
