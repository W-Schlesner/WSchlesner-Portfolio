#!/usr/bin/perl -w
use strict;
use warnings;

#Step 1
my %hash = ();
my $hash = %hash;
for( my $i = 0; $i < 5; $i++){
	print "Enter your key: ";
	my $key = <STDIN>;
	print "Enter your value: ";
	my $value = <STDIN>;
	$hash{$key}=$value
}
foreach my $key (sort keys %hash) {
    printf "Key: $key";print "Value: $hash{$key}\n";
} 

#Step 2    
print"Please enter a Key and Value to add.\n";
print "Enter your key: ";
my $key = <STDIN>;
print "Enter your value: ";
my $value = <STDIN>;
$hash{$key} = $value;
foreach my $key (sort keys %hash) {
    printf "Key: $key";print "Value: $hash{$key}\n";
}  
   
#Step 3  
print"Please enter a Key and Value to change.\n";
print "Enter your key: ";
$key = <STDIN>;
print "Enter your value: ";
$value = <STDIN>;
$hash{$key} = $value;
foreach my $key (sort keys %hash) {
    printf "Key: $key";print "Value: $hash{$key}\n";
} 

#Step 4
for( my $i = 0; $i < 3; $i++){
	print"Please enter a Key you would like to print.\n";
	print "Enter your key: ";
	$key = <STDIN>;
        $value = $hash{$key};
        print "Key: $key Value: $value\n";
}

#Step 5
for( my $i = 0; $i < 3; $i++){
	print"Please enter a Value you would like to print the Key.\n";
	print "Enter your value: ";
	my $f_value = <STDIN>;
	for my $key (keys %hash){
		
		if($hash{$key} eq $f_value)
		{
			my $f_key = $key;
			print"$f_value is found in $f_key\n";	
		}
	}
}

#Step 6
print"What Key would you like to delete?\n";
print"Enter your key: ";
$key = <STDIN>;
delete $hash{$key};
foreach my $key (sort keys %hash) {
    printf "Key: $key";print "Value: $hash{$key}\n";
}   
    
#Step 7
for( my $i = 0; $i < 3; $i++){
	print"What Key would you like to test for?\n";
	print"Enter your key: ";
	$key = <STDIN>;
	if (exists($hash{$key})){
		print"The Key is in the Hash.\n\n";
	}
	else{
		print"The Key is not in the Hash.\n\n";
	}
}

#Step 8
print"The final Hash is: \n";
foreach my $key (sort keys %hash) {
    printf "Key: $key";print "Value: $hash{$key}\n";
} 