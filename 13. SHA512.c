#include <stdio.h>
#include <string.h>
#include <openssl/sha.h>

int main() {
    // Input data
    char input[] = "Hello, World!";
    unsigned char hash[SHA512_DIGEST_LENGTH];

    // Calculate the SHA-512 hash
    SHA512((unsigned char*)input, strlen(input), hash);

    // Convert the binary hash to a hex string
    char hash_hex[2 * SHA512_DIGEST_LENGTH + 1];
    for (int i = 0; i < SHA512_DIGEST_LENGTH; i++) {
        sprintf(&hash_hex[i * 2], "%02x", hash[i]);
    }
    hash_hex[2 * SHA512_DIGEST_LENGTH] = '\0';

    // Print the result
    printf("SHA-512 Hash: %s\n", hash_hex);

    return 0;
}

