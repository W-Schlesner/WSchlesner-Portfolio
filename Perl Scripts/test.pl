#!/usr/bin/perl -w
use strict;
use warnings;

#Step 1
my %hash = ();
my $hash = \%hash;
for( my $i = 0; $i < 5; $i++){
	print "Enter your key: ";
	my $key = <STDIN>;
	print "Enter your value: ";
	my $value = <STDIN>;
	$hash{$key}=$value
}

while (my($key,$value) = each %hash){   print "$key => $value \n";}



