 #!/usr/bin/perl

use strict;
use warnings;
 
use random;

    my $dice = 1 + rand 6; # one of 1 .. 6
    print "$dice\n";
    # or
    use random qw(integer);
    $dice = 1 + rand 6; # one of 1 .. 6 This will be random since it uses the rand command to get a random number between 1-6 with the criteria  that we gave it.
    print "$dice\n";
    
    use random qw(fixed 6); # cheating on the dice, This will always be 6 since it is fixed.
    my $six = rand; # 6
    print "$six\n";
    
    my $number = 1 + rand 100; #This will generate a number between 1-100
    print"$number\n"	
    