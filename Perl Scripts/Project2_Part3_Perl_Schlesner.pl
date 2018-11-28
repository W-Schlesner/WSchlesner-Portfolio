#!/usr/bin/perl

use strict;
use warnings;



sub function_for_values {
	print "How many values do you want to enter? ";
	my $a = <>;
	my @arr;
	my @rev;
	for( my $i = 0; $i < $a; $i++)
	{
		print "Enter your numbers: ";
		my $num = <STDIN>;
		chomp $num;
		push (@arr, $num);
		@rev = reverse @arr;
	}
	print "Values normal are: ";
	foreach (@arr) {
			print "$_";
		}
	print "\n";
	print "Values reversed are: ";
	foreach (@rev) {
			print "$_";
		}
}

sub function_for_words {
	
	print "Enter how many words your want to enter: ";
	chomp(my $n = <STDIN>);
	#die "n must be an integer" if $n =~ /^\d+$/;
	my @array;
	my @revwords;
	for (1..$n) {
		print "Enter your a word: ";
		my $input = <STDIN>;
		chomp $input; # Do you want line endings, or not?
		push @array, $input;
	}
	@revwords = reverse @array;
	print "Here is your array normal: @array";
	print "\n";
	print "Here is your array reversed: @revwords";
}
function_for_values();
print "\n\n\n";
function_for_words();



/*sub Hash {
	my(%hash) = @_;
	
	foreach my $key ( keys %hash ) {
		my $value = $hash{$key};
		print "$key: $value\n";		
	}	
}
%hash = ('name' => 'Tom', 'age' => '19');

Hash(%hash);*/