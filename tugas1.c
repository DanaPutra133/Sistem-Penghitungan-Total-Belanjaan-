#include <stdio.h>

//mulai
int main() {
    //untuk jumlah barang
    int jumlahBarang;
    //deklarasi variabel harga dan totalbelanja dengan tipe data float
    //kenapa float? karena desimal untuk harga
    float harga, totalBelanja = 0.0;

    // di sini kita meminta user unutk memasukan jumlah barang
    printf("masukkan jumlah barang yang kamu beli!: ");
    scanf("%d", &jumlahBarang);

    // kondisi jika barang 0 tidak akan di kerjakan
    if (jumlahBarang <= 0) {
        //print barang harus lebih dari 0
        printf("Jumlah barang harus lebih dari 0!, masukan angka yang benar!\n");
        return 1;
    }

    // saya membuat loop agar ketika user menginput jumlah barnag di beli lebih dari 1 
    // maka akan di ulang hingga habis, variabel untuk menampung data jumlah user adalah jumlahBarang
    for (int i = 1; i <= jumlahBarang; i++) {
        //menggunakan perintah do while
        do {
            printf("Masukkan harga barang yang ke%d: ", i);
            scanf("%f", &harga);

            // user tidak boleh memasukan harga (-) negatif ke harga
            if (harga < 0) {
                printf("Harga tidak boleh negatif. masukan harga yang benar!\n");
            }
        } while (harga < 0);

        // memasukan dan menambah harga ke total belanja user
        totalBelanja += harga;
    }

    // finish user akan mendapatkan total belanja dia
    printf("Total belanja kamu: Rp %.2f\n", totalBelanja);

    return 0;
}

//Github danaputra133

//CJS version

// const readline = require('readline');
// const rl = readline.createInterface({
//     input: process.stdin,
//     output: process.stdout
// });
// function askQuestion(query) {
//     return new Promise(resolve => rl.question(query, resolve));
// }

// async function hitungTotalBelanja() {
//     const jumlahBarang = parseInt(await askQuestion("Masukkan jumlah barang yang dibeli: "));

//     if (isNaN(jumlahBarang) || jumlahBarang <= 0) {
//         console.log("Jumlah barang harus lebih dari 0.");
//         rl.close();
//         return;
//     }

//     let totalBelanja = 0;

//     for (let i = 1; i <= jumlahBarang; i++) {
//         let harga;
//         do {
//             harga = parseFloat(await askQuestion(`Masukkan harga barang ke-${i}: `));
//             if (isNaN(harga) || harga < 0) {
//                 console.log("Harga tidak boleh negatif. Masukkan harga yang valid.");
//             }
//         } while (isNaN(harga) || harga < 0); // Mengulangi input jika harga tidak valid
//         totalBelanja += harga;
//     }

//     console.log(`Total belanjaan: Rp ${totalBelanja.toFixed(2)}`);
//     rl.close();
// }
// hitungTotalBelanja();