$NetBSD: patch-poppler_Decrypt.cc,v 1.1 2016/05/10 13:13:56 jperkin Exp $

Add ULL suffixes as required.

--- poppler/Decrypt.cc.orig	2016-03-14 19:18:16.000000000 +0000
+++ poppler/Decrypt.cc
@@ -1391,14 +1391,14 @@ static void sha256(Guchar *msg, int msgL
   Guint H[8];
   int blkLen, i;
 
-  H[0] = 0x6a09e667;
-  H[1] = 0xbb67ae85;
-  H[2] = 0x3c6ef372;
-  H[3] = 0xa54ff53a;
-  H[4] = 0x510e527f;
-  H[5] = 0x9b05688c;
-  H[6] = 0x1f83d9ab;
-  H[7] = 0x5be0cd19;
+  H[0] = 0x6a09e667ULL;
+  H[1] = 0xbb67ae85ULL;
+  H[2] = 0x3c6ef372ULL;
+  H[3] = 0xa54ff53aULL;
+  H[4] = 0x510e527fULL;
+  H[5] = 0x9b05688cULL;
+  H[6] = 0x1f83d9abULL;
+  H[7] = 0x5be0cd19ULL;
 
   blkLen = 0;
   for (i = 0; i + 64 <= msgLen; i += 64) {
@@ -1444,22 +1444,22 @@ static void sha256(Guchar *msg, int msgL
 //------------------------------------------------------------------------
 // SHA 384 and SHA 512 use the same sequence of eighty constant 64 bit words.
 static const uint64_t K[80] = {
-  0x428a2f98d728ae22, 0x7137449123ef65cd, 0xb5c0fbcfec4d3b2f, 0xe9b5dba58189dbbc, 0x3956c25bf348b538,
-  0x59f111f1b605d019, 0x923f82a4af194f9b, 0xab1c5ed5da6d8118, 0xd807aa98a3030242, 0x12835b0145706fbe,
-  0x243185be4ee4b28c, 0x550c7dc3d5ffb4e2, 0x72be5d74f27b896f, 0x80deb1fe3b1696b1, 0x9bdc06a725c71235,
-  0xc19bf174cf692694, 0xe49b69c19ef14ad2, 0xefbe4786384f25e3, 0x0fc19dc68b8cd5b5, 0x240ca1cc77ac9c65,
-  0x2de92c6f592b0275, 0x4a7484aa6ea6e483, 0x5cb0a9dcbd41fbd4, 0x76f988da831153b5, 0x983e5152ee66dfab,
-  0xa831c66d2db43210, 0xb00327c898fb213f, 0xbf597fc7beef0ee4, 0xc6e00bf33da88fc2, 0xd5a79147930aa725,
-  0x06ca6351e003826f, 0x142929670a0e6e70, 0x27b70a8546d22ffc, 0x2e1b21385c26c926, 0x4d2c6dfc5ac42aed,
-  0x53380d139d95b3df, 0x650a73548baf63de, 0x766a0abb3c77b2a8, 0x81c2c92e47edaee6, 0x92722c851482353b,
-  0xa2bfe8a14cf10364, 0xa81a664bbc423001, 0xc24b8b70d0f89791, 0xc76c51a30654be30, 0xd192e819d6ef5218,
-  0xd69906245565a910, 0xf40e35855771202a, 0x106aa07032bbd1b8, 0x19a4c116b8d2d0c8, 0x1e376c085141ab53,
-  0x2748774cdf8eeb99, 0x34b0bcb5e19b48a8, 0x391c0cb3c5c95a63, 0x4ed8aa4ae3418acb, 0x5b9cca4f7763e373,
-  0x682e6ff3d6b2b8a3, 0x748f82ee5defb2fc, 0x78a5636f43172f60, 0x84c87814a1f0ab72, 0x8cc702081a6439ec,
-  0x90befffa23631e28, 0xa4506cebde82bde9, 0xbef9a3f7b2c67915, 0xc67178f2e372532b, 0xca273eceea26619c,
-  0xd186b8c721c0c207, 0xeada7dd6cde0eb1e, 0xf57d4f7fee6ed178, 0x06f067aa72176fba, 0x0a637dc5a2c898a6,
-  0x113f9804bef90dae, 0x1b710b35131c471b, 0x28db77f523047d84, 0x32caab7b40c72493, 0x3c9ebe0a15c9bebc,
-  0x431d67c49c100d4c, 0x4cc5d4becb3e42b6, 0x597f299cfc657e2a, 0x5fcb6fab3ad6faec, 0x6c44198c4a475817
+  0x428a2f98d728ae22ULL, 0x7137449123ef65cdULL, 0xb5c0fbcfec4d3b2fULL, 0xe9b5dba58189dbbcULL, 0x3956c25bf348b538ULL,
+  0x59f111f1b605d019ULL, 0x923f82a4af194f9bULL, 0xab1c5ed5da6d8118ULL, 0xd807aa98a3030242ULL, 0x12835b0145706fbeULL,
+  0x243185be4ee4b28cULL, 0x550c7dc3d5ffb4e2ULL, 0x72be5d74f27b896fULL, 0x80deb1fe3b1696b1ULL, 0x9bdc06a725c71235ULL,
+  0xc19bf174cf692694ULL, 0xe49b69c19ef14ad2ULL, 0xefbe4786384f25e3ULL, 0x0fc19dc68b8cd5b5ULL, 0x240ca1cc77ac9c65ULL,
+  0x2de92c6f592b0275ULL, 0x4a7484aa6ea6e483ULL, 0x5cb0a9dcbd41fbd4ULL, 0x76f988da831153b5ULL, 0x983e5152ee66dfabULL,
+  0xa831c66d2db43210ULL, 0xb00327c898fb213fULL, 0xbf597fc7beef0ee4ULL, 0xc6e00bf33da88fc2ULL, 0xd5a79147930aa725ULL,
+  0x06ca6351e003826fULL, 0x142929670a0e6e70ULL, 0x27b70a8546d22ffcULL, 0x2e1b21385c26c926ULL, 0x4d2c6dfc5ac42aedULL,
+  0x53380d139d95b3dfULL, 0x650a73548baf63deULL, 0x766a0abb3c77b2a8ULL, 0x81c2c92e47edaee6ULL, 0x92722c851482353bULL,
+  0xa2bfe8a14cf10364ULL, 0xa81a664bbc423001ULL, 0xc24b8b70d0f89791ULL, 0xc76c51a30654be30ULL, 0xd192e819d6ef5218ULL,
+  0xd69906245565a910ULL, 0xf40e35855771202aULL, 0x106aa07032bbd1b8ULL, 0x19a4c116b8d2d0c8ULL, 0x1e376c085141ab53ULL,
+  0x2748774cdf8eeb99ULL, 0x34b0bcb5e19b48a8ULL, 0x391c0cb3c5c95a63ULL, 0x4ed8aa4ae3418acbULL, 0x5b9cca4f7763e373ULL,
+  0x682e6ff3d6b2b8a3ULL, 0x748f82ee5defb2fcULL, 0x78a5636f43172f60ULL, 0x84c87814a1f0ab72ULL, 0x8cc702081a6439ecULL,
+  0x90befffa23631e28ULL, 0xa4506cebde82bde9ULL, 0xbef9a3f7b2c67915ULL, 0xc67178f2e372532bULL, 0xca273eceea26619cULL,
+  0xd186b8c721c0c207ULL, 0xeada7dd6cde0eb1eULL, 0xf57d4f7fee6ed178ULL, 0x06f067aa72176fbaULL, 0x0a637dc5a2c898a6ULL,
+  0x113f9804bef90daeULL, 0x1b710b35131c471bULL, 0x28db77f523047d84ULL, 0x32caab7b40c72493ULL, 0x3c9ebe0a15c9bebcULL,
+  0x431d67c49c100d4cULL, 0x4cc5d4becb3e42b6ULL, 0x597f299cfc657e2aULL, 0x5fcb6fab3ad6faecULL, 0x6c44198c4a475817ULL
 };
 
 static inline uint64_t rotr(uint64_t x, uint64_t n) {
@@ -1548,14 +1548,14 @@ static void sha512(Guchar *msg, int msgL
   uint64_t H[8];
   int blkLen = 0, i;
  // setting the initial hash value.
-  H[0] = 0x6a09e667f3bcc908;
-  H[1] = 0xbb67ae8584caa73b;
-  H[2] = 0x3c6ef372fe94f82b;
-  H[3] = 0xa54ff53a5f1d36f1;
-  H[4] = 0x510e527fade682d1;
-  H[5] = 0x9b05688c2b3e6c1f;
-  H[6] = 0x1f83d9abfb41bd6b;
-  H[7] = 0x5be0cd19137e2179;
+  H[0] = 0x6a09e667f3bcc908ULL;
+  H[1] = 0xbb67ae8584caa73bULL;
+  H[2] = 0x3c6ef372fe94f82bULL;
+  H[3] = 0xa54ff53a5f1d36f1ULL;
+  H[4] = 0x510e527fade682d1ULL;
+  H[5] = 0x9b05688c2b3e6c1fULL;
+  H[6] = 0x1f83d9abfb41bd6bULL;
+  H[7] = 0x5be0cd19137e2179ULL;
 
   for (i = 0; i + 128 <= msgLen; i += 128) {
     sha512HashBlock(msg + i, H);
@@ -1620,14 +1620,14 @@ static void sha384(Guchar *msg, int msgL
   uint64_t H[8];
   int blkLen, i;
 //setting initial hash values
-  H[0] = 0xcbbb9d5dc1059ed8;
-  H[1] = 0x629a292a367cd507;
-  H[2] = 0x9159015a3070dd17;
-  H[3] = 0x152fecd8f70e5939;
-  H[4] = 0x67332667ffc00b31;
-  H[5] = 0x8eb44a8768581511;
-  H[6] = 0xdb0c2e0d64f98fa7;
-  H[7] = 0x47b5481dbefa4fa4;
+  H[0] = 0xcbbb9d5dc1059ed8ULL;
+  H[1] = 0x629a292a367cd507ULL;
+  H[2] = 0x9159015a3070dd17ULL;
+  H[3] = 0x152fecd8f70e5939ULL;
+  H[4] = 0x67332667ffc00b31ULL;
+  H[5] = 0x8eb44a8768581511ULL;
+  H[6] = 0xdb0c2e0d64f98fa7ULL;
+  H[7] = 0x47b5481dbefa4fa4ULL;
 //SHA 384 will use the same sha512HashBlock function.
   blkLen = 0;
   for (i = 0; i + 128 <= msgLen; i += 128) {
