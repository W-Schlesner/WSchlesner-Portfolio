#!/usr/bin/perl

use strict;
use warnings;

# 1. Create a string of at least 20 characters (should be spaces).
my $str = "The quick brown fox jumps over the lazy dog";
print "Number 1\n";
print "String: $str\n";

# 2. Access the string you create by creating at least 3 slices.
my $slice1 = substr($str, 0,  5);    # first 5 characters
my $slice2 = substr($str, 10, 8);    # 8 characters after the 10th chracter
my $slice3 = substr($str, -5);       # last 5 chracters
print "Number 2\n";
print "Slice 1: $slice1\n";
print "Slice 2: $slice2\n";
print "Slice 3: $slice3\n";

# 4. Make a new string which breaks the string into a list using a space as the delimiter.
my @words = split(' ', $str);        # break the string into a list of words
my $joined_words = join(' ', @words);    # join the words back into a string
print "Number 4\n";
print "String from words: $joined_words\n";

# 3. Make a new string which has the first letter of each word capitalized.
my $capitalized_string = join(' ', map { ucfirst($_) } @words);
print "Number 3\n";
print "Each first letter capitalized: $capitalized_string\n";

# 5. Make a new string which replaces all spaces from the original with hyphens.
my $hyphen_string = join('-', @words);    # join the words with hyphen
print "Number 5\n";
print "Words joined with a hyphen: $hyphen_string\n";

# 6. Make a new string which breaks the string from 5 into a list using the hyphen as a delimiter.
my @words_hyphen = split(/-/, $hyphen_string);
my $joined_words_hyphen = join(' ', @words_hyphen);
print "Number 6\n";
print "New string: $joined_words_hyphen\n";

# 7. Take the list from 6 and join all the elements with a delimiter of your choice.
my $joined_words_choice = join('/', @words_hyphen);
print "Number 7\n";
print "Joined words with '/': $joined_words_choice\n";

# 8. Create an array/list of words with at least five values.
my @list_of_words = ('USA', 'France', 'Germany', 'Japan', 'China', 'India');
print "Number 8\n";
print "List of words: (@list_of_words)\n";

# 9. Sort the array based on lexicographical order.
my @sorted_list_of_words = sort @list_of_words;
print "Number 9\n";
print "Sorted words: (@sorted_list_of_words)\n";

# 10. Create an array/list of numbers with at least five values.
my @list_of_numbers = (42, 13, 7, 17, 103, 29);
print "Number 10\n";
print "List of numbers: (@list_of_numbers)\n";

# 11. Sort the array from lowest to highest value.
my @sorted_list_of_numbers = sort { $a <=> $b } @list_of_numbers;
print "Number 11\n";
print "Sorted numbers: (@sorted_list_of_numbers)\n";

# 12. Create a list of colors with at least five values.
my @colors = ('red', 'blue', 'green', 'white', 'yellow', 'black');
print "Number 12\n";
print "List of colors: (@colors)\n";

# 13. Create a function which will take as input a list of predefined colors
#     in random order and will sort the colors based on the function implementation
#     (you decide the appropriate “order” of the colors from greatest to least).

sub sort_colors {
    my (@list) = @_;

    # Sort the least of words from greatest to least
    my @sorted_list = sort { $b cmp $a } @list;

    # Return the sorted list
    return @sorted_list;
}

my @sorted_colors = sort_colors(@colors);
print "Number 13\n";
print "Sorted colors from greatest to least: (@sorted_colors)\n";
