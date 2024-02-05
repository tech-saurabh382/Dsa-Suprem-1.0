// Question Description

// Find the element in an infinite sorted array

// Brute force approach

// while (1)
// {
//     if (a[i] > x)
//     {
//         break;
//     }
//     if (a[i] == x)
//     {
//         ans = i;
//     }
//     i++;
// }

// Better approach (Exponential Search)

// Hum do variable legay i,j

// while (a[j] < x)
// {
//     i = j;
//     j = j * 2;
// }

// Algo 
// i=0;
// j=1;

// while(a[j]<x){
//     i = j;
//     j = j*2;
// }
// start = i; end = j;
// B.s(x);