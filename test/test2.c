// #include <stdio.h>

// // Uppercase Letters (A-Z)
// const int A[10][10] = {
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,1,1,0,0,0,0,1,1,0},
//     {0,1,1,0,0,0,0,1,1,0},
//     {1,1,1,1,1,1,1,1,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1}
// };

// const int B[10][10] = {
//     {1,1,1,1,1,1,0,0,0,0},
//     {1,1,0,0,0,0,1,1,0,0},
//     {1,1,0,0,0,0,0,1,1,0},
//     {1,1,0,0,0,0,0,1,1,0},
//     {1,1,1,1,1,1,1,1,0,0},
//     {1,1,0,0,0,0,0,1,1,0},
//     {1,1,0,0,0,0,0,1,1,0},
//     {1,1,0,0,0,0,0,1,1,0},
//     {1,1,0,0,0,0,1,1,0,0},
//     {1,1,1,1,1,1,0,0,0,0}
// };

// const int C[10][10] = {
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,1,1,0,0,0,1,1,0},
//     {0,1,1,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {0,1,1,0,0,0,0,0,0,0},
//     {0,0,1,1,0,0,0,1,1,0},
//     {0,0,0,1,1,1,1,0,0,0}
// };

// const int D[10][10] = {
//     {1,1,1,1,1,1,0,0,0,0},
//     {1,1,0,0,0,0,1,1,0,0},
//     {1,1,0,0,0,0,0,1,1,0},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,1,1,0},
//     {1,1,0,0,0,0,1,1,0,0},
//     {1,1,1,1,1,1,0,0,0,0}
// };

// const int E[10][10] = {
//     {1,1,1,1,1,1,1,1,1,1},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,1,1,1,1,1,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,1,1,1,1,1,1,1,1}
// };

// const int F[10][10] = {
//     {1,1,1,1,1,1,1,1,1,1},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,1,1,1,1,1,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0}
// };

// const int G[10][10] = {
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,1,1,0,0,0,1,1,0},
//     {0,1,1,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,1,1,1,1,0},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {0,1,1,0,0,0,0,0,1,1},
//     {0,0,1,1,0,0,0,1,1,0},
//     {0,0,0,1,1,1,1,0,0,0}
// };

// const int H[10][10] = {
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,1,1,1,1,1,1,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1}
// };

// const int I[10][10] = {
//     {1,1,1,1,1,1,1,1,1,1},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {1,1,1,1,1,1,1,1,1,1}
// };

// const int J[10][10] = {
//     {0,0,0,0,0,0,1,1,1,1},
//     {0,0,0,0,0,0,0,1,1,0},
//     {0,0,0,0,0,0,0,1,1,0},
//     {0,0,0,0,0,0,0,1,1,0},
//     {0,0,0,0,0,0,0,1,1,0},
//     {0,0,0,0,0,0,0,1,1,0},
//     {0,0,0,0,0,0,0,1,1,0},
//     {1,1,0,0,0,0,0,1,1,0},
//     {0,1,1,0,0,0,1,1,0,0},
//     {0,0,1,1,1,1,0,0,0,0}
// };

// const int K[10][10] = {
//     {1,1,0,0,0,0,0,1,1,0},
//     {1,1,0,0,0,0,1,1,0,0},
//     {1,1,0,0,0,1,1,0,0,0},
//     {1,1,0,0,1,1,0,0,0,0},
//     {1,1,0,1,1,0,0,0,0,0},
//     {1,1,1,1,0,0,0,0,0,0},
//     {1,1,0,1,1,0,0,0,0,0},
//     {1,1,0,0,1,1,0,0,0,0},
//     {1,1,0,0,0,1,1,0,0,0},
//     {1,1,0,0,0,0,1,1,0,0}
// };

// const int L[10][10] = {
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,1,1,1,1,1,1,1,1}
// };

// const int M[10][10] = {
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,1,0,0,0,0,1,1,1},
//     {1,1,1,1,0,0,1,1,1,1},
//     {1,1,0,1,1,1,1,0,1,1},
//     {1,1,0,0,1,1,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1}
// };

// const int N[10][10] = {
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,1,0,0,0,0,0,1,1},
//     {1,1,1,1,0,0,0,0,1,1},
//     {1,1,0,1,1,0,0,0,1,1},
//     {1,1,0,0,1,1,0,0,1,1},
//     {1,1,0,0,0,1,1,0,1,1},
//     {1,1,0,0,0,0,1,1,1,1},
//     {1,1,0,0,0,0,0,1,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1}
// };

// const int O[10][10] = {
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,1,1,0,0,0,0,1,1,0},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {0,1,1,0,0,0,0,1,1,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,0,0,1,1,1,1,0,0,0}
// };

// const int P[10][10] = {
//     {1,1,1,1,1,1,1,0,0,0},
//     {1,1,0,0,0,0,0,1,1,0},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,1,1,1,1,1,1,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0}
// };

// const int Q[10][10] = {
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,1,1,0,0,0,0,1,1,0},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,1,0,0,1,1},
//     {0,1,1,0,0,0,1,1,1,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,0,0,1,1,1,1,0,0,1}
// };

// const int R[10][10] = {
//     {1,1,1,1,1,1,1,0,0,0},
//     {1,1,0,0,0,0,0,1,1,0},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,1,1,1,1,1,1,0,0},
//     {1,1,0,0,0,0,1,1,0,0},
//     {1,1,0,0,0,0,0,1,1,0},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1}
// };

// const int S[10][10] = {
//     {0,0,0,1,1,1,1,1,0,0},
//     {0,0,1,1,0,0,0,0,0,0},
//     {0,1,1,0,0,0,0,0,0,0},
//     {0,1,1,0,0,0,0,0,0,0},
//     {0,0,1,1,1,1,1,0,0,0},
//     {0,0,0,0,0,0,0,1,1,0},
//     {0,0,0,0,0,0,0,1,1,0},
//     {0,0,0,0,0,0,1,1,0,0},
//     {0,0,0,0,0,1,1,0,0,0},
//     {0,0,1,1,1,1,0,0,0,0}
// };

// const int T[10][10] = {
//     {1,1,1,1,1,1,1,1,1,1},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0}
// };

// const int U[10][10] = {
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {0,1,1,0,0,0,0,1,1,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,0,0,1,1,1,1,0,0,0}
// };

// const int V[10][10] = {
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {0,1,1,0,0,0,0,1,1,0},
//     {0,1,1,0,0,0,0,1,1,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0}
// };

// const int W[10][10] = {
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,0,0,0,0,1,1},
//     {1,1,0,0,1,1,0,0,1,1},
//     {1,1,0,0,1,1,0,0,1,1},
//     {1,1,0,1,1,1,1,0,1,1},
//     {1,1,1,1,0,0,1,1,1,1},
//     {1,1,1,0,0,0,0,1,1,1},
//     {1,1,0,0,0,0,0,0,1,1}
// };

// const int X[10][10] = {
//     {1,1,0,0,0,0,0,0,1,1},
//     {0,1,1,0,0,0,0,1,1,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,1,1,0,0,0,0,1,1,0},
//     {1,1,0,0,0,0,0,0,1,1}
// };

// const int Y[10][10] = {
//     {1,1,0,0,0,0,0,0,1,1},
//     {0,1,1,0,0,0,0,1,1,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0}
// };

// const int Z[10][10] = {
//     {1,1,1,1,1,1,1,1,1,1},
//     {0,0,0,0,0,0,0,1,1,0},
//     {0,0,0,0,0,0,1,1,0,0},
//     {0,0,0,0,0,1,1,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,1,1,0,0,0,0,0},
//     {0,0,1,1,0,0,0,0,0,0},
//     {0,1,1,0,0,0,0,0,0,0},
//     {1,1,0,0,0,0,0,0,0,0},
//     {1,1,1,1,1,1,1,1,1,1}
// };

// // Lowercase Letters (a-z)
// const int a[10][10] = {
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,0,1,1,1,1,1,1,0,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0}
// };

// const int b[10][10] = {
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,1,1,0,0,0,0,0,0,0},
//     {0,1,1,0,0,0,0,0,0,0},
//     {0,1,1,0,0,0,0,0,0,0},
//     {0,1,1,1,1,1,1,0,0,0},
//     {0,1,1,0,0,0,1,1,0,0},
//     {0,1,1,0,0,0,1,1,0,0},
//     {0,1,1,0,0,0,1,1,0,0},
//     {0,1,1,1,1,1,1,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0}
// };

// const int c[10][10] = {
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,1,1,0,0,0,0,0,0,0},
//     {0,1,1,0,0,0,0,0,0,0},
//     {0,1,1,0,0,0,0,0,0,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0}
// };

// const int d[10][10] = {
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,0,0,0,0,0,0,1,1,0},
//     {0,0,0,0,0,0,0,1,1,0},
//     {0,0,0,0,0,0,0,1,1,0},
//     {0,0,0,1,1,1,1,1,1,0},
//     {0,0,1,1,0,0,0,1,1,0},
//     {0,0,1,1,0,0,0,1,1,0},
//     {0,0,1,1,0,0,0,1,1,0},
//     {0,0,0,1,1,1,1,1,1,0},
//     {0,0,0,0,0,0,0,0,0,0}
// };

// const int e[10][10] = {
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,1,1,0,0,0,0,0,0,0},
//     {0,1,1,1,1,1,1,0,0,0},
//     {0,1,1,0,0,0,0,0,0,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0}
// };

// // Add more lowercase letters (f-z) as needed...

// // Numbers (0-9)
// const int zero[10][10] = {
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,1,1,0,0,0,0,1,1,0},
//     {0,1,1,0,0,0,0,1,1,0},
//     {0,1,1,0,0,0,0,1,1,0},
//     {0,1,1,0,0,0,0,1,1,0},
//     {0,1,1,0,0,0,0,1,1,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0}
// };

// const int one[10][10] = {
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,1,1,1,0,0,0,0},
//     {0,0,1,1,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0}
// };

// const int two[10][10] = {
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,0,0,0,0,0,1,1,0,0},
//     {0,0,0,0,0,1,1,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,1,1,0,0,0,0,0},
//     {0,0,1,1,0,0,0,0,0,0},
//     {0,0,1,1,0,0,0,0,0,0},
//     {0,0,1,1,1,1,1,1,0,0},
//     {0,0,0,0,0,0,0,0,0,0}
// };

// const int three[10][10] = {
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,0,0,0,0,0,1,1,0,0},
//     {0,0,0,0,0,1,1,0,0,0},
//     {0,0,0,1,1,1,0,0,0,0},
//     {0,0,0,0,0,1,1,0,0,0},
//     {0,0,0,0,0,0,1,1,0,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0}
// };

// const int four[10][10] = {
//     {0,0,0,0,0,1,1,0,0,0},
//     {0,0,0,0,1,1,1,0,0,0},
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,1,1,0,1,1,0,0,0},
//     {0,1,1,0,0,1,1,0,0,0},
//     {1,1,1,1,1,1,1,1,1,0},
//     {0,0,0,0,0,1,1,0,0,0},
//     {0,0,0,0,0,1,1,0,0,0},
//     {0,0,0,0,0,1,1,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0}
// };

// // Add more numbers (5-9) as needed...

// // Popular Symbols
// const int exclamation[10][10] = {
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0}
// };

// const int question[10][10] = {
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,1,1,0,0,1,1,0,0},
//     {0,0,0,0,0,0,1,1,0,0},
//     {0,0,0,0,0,1,1,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,1,1,0,0,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0}
// };

// const int plus[10][10] = {
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,1,1,1,1,1,1,1,1,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0}
// };

// const int minus[10][10] = {
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,1,1,1,1,1,1,1,1,0},
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0}
// };

// const int asterisk[10][10] = {
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,1,0,0,1,1,0,0,1,0},
//     {0,0,1,0,1,1,0,1,0,0},
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,0,1,1,1,1,0,0,0},
//     {0,0,1,0,1,1,0,1,0,0},
//     {0,1,0,0,1,1,0,0,1,0},
//     {0,0,0,0,1,1,0,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0}
// };

// // Function to print a 10x10 matrix (for demonstration)
// void printMatrix(const int matrix[10][10]) {
//     for (int i = 0; i < 10; i++) {
//         for (int j = 0; j < 10; j++) {
//             // printf("%d ", matrix[i][j]);
//             if (matrix[i][j] == 1) {
//                 printf("# ");
//             } else {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     printf("\n");
// }

// int main() {
//     // Example: Print some matrices
//     printf("Uppercase A:\n");
//     printMatrix(A);

//     printf("Lowercase a:\n");
//     printMatrix(a);

//     printf("Number 0:\n");
//     printMatrix(zero);

//     printf("Exclamation Mark (!):\n");
//     printMatrix(exclamation);

//     return 0;
// }