//! Basic Algorithm C++ Program from w3resource
//! For colouring comments used extension "Better Comments"
//!  exclamentry sign(!) is used for what program do
//? question mark(?) show real comments written in program

/* //!program for sum of two given integer values. If the two values are the same, then return triple their sum.

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Input two integer: ";
    cin>>a>>b;
    if(a != b)
    cout<<a + b;
    else
    cout<<(a + b) * 3;
    return 0;
} */


/* //!program to find the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference.

#include<iostream>
using namespace std;
int function(int n)
{
    const int a = 51;
    int result = n - a;
    if(n > 51) return result * 3;
    else return result;
}
int main()
{
    cout<<function(53)<<endl;
    cout<<function(30)<<endl;
    cout<<function(51)<<endl;
    return 0;
} */


/* //! program to check two given integers, and return true if one of them is 30 or if their sum is 30.

#include<iostream>
using namespace std;
int function(int a, int b)
{
    int c = a + b;
    if(a == 30 || b == 30 || c == 30)
    {
        return true;
    }
    else return false;
}
int main()
{
    cout<<function(30,0)<<endl;
    cout<<function(25,5)<<endl;
    cout<<function(20,30)<<endl;
    cout<<function(20,25)<<endl;
    return 0;
} */


/* //! program for integer and return true if it is within 10 of 100 or 200.
#include<iostream>
using namespace std;
bool function(int n)
{
    if(abs(n - 100 ) <= 10 || abs(n - 200) <= 10)
    {
        return true;
    }
    else return false;
}
int main()
{
    cout<<function(103)<<endl;
    cout<<function(90)<<endl;
    cout<<function(89)<<endl;
    return 0;
} */

//! program to create a string where 'if' is added to the front of a given string. If the string already begins with 'if', return the string unchanged.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
}

/* //! program to remove the character at a given position in the string. The given position will be in the range 0..string length -1 inclusive.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to exchange the first and last characters in a given string and return the result string
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a string that is 4 copies of the 2 front characters of a given string. If the given string length is less than 2 return the original string.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a string with the last character added at the front and back of a given string of length 1 or more
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if a given positive number is a multiple of 3 or a multiple of 7
#include<iostream>
using namespace std;
bool function(int n)
{
    if(n % 3 == 0 || n % 7 == 0) return true;
    else return false;
}
int main()
{
    int a{0};
    cout<<"Input integer: ";
    cin>>a;
    cout<<function(a);
    return 0;
} */

/* //! program to create a string taking the first 3 characters of a given string. Then, return the string with the 3 characters added to both the front and back. If the given string length is less than 3, use whatever characters are there.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if a given string starts with 'C#'
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if one given temperature is less than 0 and the other is greater than 100.
#include<iostream>
using namespace std;
bool function(int a, int b) {
    if(a > 100 && b < 0) return true;
    else if(a < 0 && b > 100) return true;
    else
    return false;
}
int main()
{
    int a,b;
    cout<<"Input two number: ";
    cin>>a>>b;
    cout<<function(a,b);
    return 0;
} */

/* //! program to check two given integers whether either of them is in the range 100..200 inclusive.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check whether three given integer values are in the range 20..50 inclusive. Return true if 1 or more of them are in the range, otherwise false.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check whether two given integer values are in the range 20..50 inclusive. Return true if 1 or other is in the range, otherwise false
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if the string 'yt' appears at index 1 in a given string. If it appears return a string without 'yt' otherwise return the original string.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program for finding largest number among three integers.
#include<iostream>
using namespace std;
int largest(int a,int b,int c)
{
    if(a > b && a > b)
    return a;
    else if(b > c)
    return b;
    else
    return c;
}
int main()
{
    int a,b,c;
    cout<<"Input three integer: ";
    cin>>a>>b>>c;
    cout<<largest(a,b,c);
    return 0;
} */

/* //! program to check which number is closest to the value 100 among two given integers. Return 0 if the two numbers are equal.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check whether two given integers are in the range 40..50 inclusive, or they are both in the range 50..60 inclusive.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to find the larger value from two positive integer values that is in the range 20..30 inclusive. Also, return 0 if neither is in that range.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if a given string contains between 2 and 4 'z' characters.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if two positive integers have same last digit.
#include<iostream>
using namespace std;
bool lastDigit(int a,int b)
{
    a %= 10;
    b %= 10;
    if(a == b) 
    {   return true; }
    else 
    { return false; } 
}
int main()
{
    int a,b;
    cout<<"Input two integer: ";
    cin>>a>>b;
    if(a > 0 && b > 0) cout<<lastDigit(a,b);
    else cout<<"please enter positive number";
    return 0;
} */

/* //! program to create the string which is n (non-negative integer) copies of a given string.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create another string which is n (non-negative integer) copies of the first 3 characters of a given string. If the length of the given string is less than 3 then return n copies of the string.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to count the string "aa" in a given string and assume "aaa" contains two "aa"
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if the first appearance of "a" in a given string is immediately followed by another "a".
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create another string made of every other character starting with the first from a given string.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a string like "aababcabcd" from a given string "abcd"
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to count the number of times a substring of length 2 appears in a given string as well as its last two characters. Do not count the end substring.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check whether the sequence of numbers 1, 2, 3 appears in a given array of integers somewhere.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to compare two given strings and return the number of positions where they contain the same length 2 substring.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a new string from a given string where a specified character is removed except at the beginning and end.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create the string of the characters at indexes 0,1,4,5,8,9 ... from a given string.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to count the number of 5's next to each other in an array of integers. Count the situation where the second 5 is actually a 6.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if a triple is present in an array of integers or not. If a value appears three times in a row in an array it is called a triple.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to compute the sum of the two given integers. If the sum is in the range 10..20 inclusive return 30.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program that accepts two integers and returns true if either one is 5 or their sum or difference is 5.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to test if a given non-negative number is a multiple of 13 or it is one more than a multiple of 13.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if a given number that is not negative is a multiple of 3 or 7, but not both.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if a given number is within 2 of a multiple of 10.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to compute the sum of the two given integers. Return 18 if one of the given integer values is in the range 10..20 inclusive.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check whether a given string begins with "F" or ends with "B". If the string starts with "F" return "Fizz" and return "Buzz" if it finishes with "B". If the string starts with "F" and ends with "B" return "FizzBuzz". In other cases return the original string.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if it is possible to add two integers to get the third integer from three given integers.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if y is greater than x, and z is greater than y from three given integers x,y,z.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if three given numbers are in strict increasing order. For example, 4, 7, 15, or 45, 56, 67, but not 4 ,5, 8 or 6, 6, 8. However, if a fourth parameter is true, equality is allowed, such as 6, 6, 8 or 7, 7, 7.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if two or more integers that are not negative have the same rightmost digit.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check three given integers and return true if one of them is 20 lower than one of the others.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to find the larger of two given integers. However if the two integers have the same remainder when divided by 7, then return the smaller integer. If the two integers are the same, return 0.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check two given integers. Each integer is in the range 10..99. Return true if a digit appears in both numbers, such as the 3 in 13 and 33
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to compute the sum of two given non-negative integers x and y as long as the sum has the same number of digits as x. If the sum has more digits than x, return x without y.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to compute the sum of three given integers. Return the third value if the two values are the same.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to compute the sum of the three integers. If one of the values is 13 then do not count it and its right towards the sum.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to compute the sum of the three given integers. Except for 13 and 17, any value in the range 10..20 inclusive counts as 0.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check two integers and return the value nearest to 13 without crossing over. Return 0 if both numbers go over.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check three given integers (small, medium and large) and return true if the difference between small and medium and the difference between medium and large is same.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create another string using two given strings s1, s2, the format of the new string will be s1s2s2s1.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to insert a given string into middle of the another given string of length 4.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create another string using three copies of the last two characters of a given string of length at least two.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a new string using the first two characters of a given string. If the string length is less than 2, return the original string.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create the string of the first half of a given string of even length.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a new string without the first and last characters of a given string of length at least two.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a new string from two given strings, one of which is shorter and the other is larger. The format of the updated string will be long string + short string + long string.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to combine two strings of length at least 1, after removing their first character.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to move the first two characters to the end of a given string of length at least two.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a new string without the first and last characters of a given string of any length.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a string using the two middle characters of a given string of even length (at least 2).
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a new string using the first and last n characters from a given string of length at least n.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a string of length 2 starting at the given index of a given string.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a string of length 2 starting at the given index of a given string.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a new string of length 2, using the first two characters of a given string. If the given string length is less than 2 use '#' as missing characters.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a string taking the first character from a string and the last character from another given string. If the length of any given string is 0, use '#' as its missing character.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a new string from a given string after swapping the last two characters
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if a given string begins with 'abc' or 'xyz'. If the string begins with 'abc' or 'xyz' return 'abc' or 'xyz' otherwise return the empty string.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check whether the first two characters and the last two characters of a given string are the same.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to add two given strings. If the given strings have different lengths, remove the characters from the longer string.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a new string using 3 copies of the first 2 characters of a given string. If the length of the given string is less than 2 use the whole string.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a new string from a string. Return the given string without the first two characters if the two characters at the beginning and end are the same. Otherwise, return the original string.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a string from a given string without the first and last character. This is possible if the first or last characters are 'a' otherwise return the original given string.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a new string from a given string. If the first or first two characters are 'a', return the string without those 'a' characters, otherwise return the original string.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check a given array of integers of length 1 or more and return true if 10 appears as either first or last element in the given array.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check a given array of integers of length 1 or more. The program will return true if the first element and the last element are equal in the given array.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check two given arrays of integers of length 1 or more. This will return true if they have the same first element or if they have the same last element
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to compute the sum of the elements of an array of integers
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to rotate the elements of a given array of integers (length 4 ) in the left direction and return the changed array.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to reverse a given array of integers of length 5.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create an array containing the middle elements from the two given arrays of integers, each of length 5.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create an array taking the first and last elements of a given array of integers and length 1 or more.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to determine whether a given array of integers of length 2 contains 15 or 20
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if an array of integers with length 2 does not contain 15 or 20.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check a given array of integers and return true if the array contains 10 or 20 twice. The length of the array will be 0, 1, or 2.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check a given array of integers, length 3 and create an array. If there is a 5 in the given array immediately followed by a 7 then set 7 to 1.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to compute the sum of the two given arrays of integers, length 3 and find the array that has the largest sum.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create an array taking two middle elements from a given array of integers of length even.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create an array by swapping the first and last elements of a given array of integers with a length of at least 1.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create an array length 3 from a given array (length at least 3) using the elements from the middle of the array.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to find the largest value from the first, last, and middle elements of a given array of integers of odd length (at least 1).
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to count the even number of elements in a given array of integers.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to compute the difference between the largest and smallest values in a given array of integers and length one or more.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to compute the sum of values in a given array of integers except the number 17. Return 0 if the given array has no integers.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to compute the sum of the numbers in a given array except the ones starting with 5 followed by at least one 6. Return 0 if the given array has no integers.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if a given array of integers contains 5 next to a 5 somewhere.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check whether a given array of integers contains 5's and 7's.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program that checks if the sum of all 5' in the array is exactly 15.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if the number of 3's is greater than the number of 5's.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if a given array of integers contains a 3 or a 5.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if a given array of integers contains no 3 or 5.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if an array of integers contains a 3 next to a 3 or a 5 next to a 5 or both.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check a given array of integers. Then, return true if the given array contains two 5's next to each other, or two 5's separated by one element.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check a given array of integers and return true if there is a 3 with a 5 somewhere later in the given array.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check a given array of integers. The program will return true if the given array contains either 2 even or 2 odd values all next to each other.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check a given array of integers. The program will return true if the value 5 appears 5 times and there are no 5 next to each other.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check a given array of integers and return true if every 5 that appears in the given array is next to another 5.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check a given array of integers. The program will return true if the specified number of the same elements appears at the start and end of the given array.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check a given array of integers and return true if the array contains three increasing adjacent numbers
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if the value of each element is equal or greater than the value of the previous element of a given array of integers.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check if there are two values 15, 15 adjacent to each other in a given array (length should be at least 2) of integers. Return true otherwise false.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to find the largest average value between the first and second halves of a given array of integers. Ensure that the minimum length is at least 2. Assume that the second half begins at index (array length)/2.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to count the number of strings with a given length in a given array of strings.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create an array using the first n strings from a given array of strings. (n>=1 and <=length of the array).
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create an array from a given array of strings using all the strings whose lengths are matched with the given string length.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to check a positive integer and return true if it contains the number 3. Otherwise return false.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program that creates a new array of odd numbers with specific lengths from a given array of positive integers.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a list from a given list of integers where each element is multiplied by 5.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program that multiplies each integer three times to create a list from a given list of integers
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a list from a given list of strings where each element has "$" added at the beginning and end position.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a list from a given list of strings where each element is replaced by 3 copies of the string concatenated together
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a list from a given list of integers. In this program, each integer value is added to 3 and the result value is multiplied by 4
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */

/* //! program to create a list of the rightmost digits from a given list of positive integers.
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
} */
