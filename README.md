# TUGAS-PRAKTIKUM-01-FUNCTION-
NAMA: M.KRISNA.Y.P KELAS MALAM KARYAWAN TI C 
# Tugas Praktikum 1: Fungsi dalam C++

Repositori ini berisi kode C++ sederhana yang dibuat untuk memenuhi tugas Praktikum 1. Program ini menunjukkan implementasi dasar dari sebuah *function* untuk menghitung nilai rata-rata dari tiga angka yang diinput oleh pengguna.

## Deskripsi Program

Program akan meminta pengguna untuk memasukkan tiga buah angka. Setelah itu, program akan menghitung dan menampilkan:
- **Jumlah** dari ketiga angka tersebut.
- **Banyaknya data** yang dimasukkan (dalam kasus ini selalu 3).
- **Nilai rata-rata** dari angka-angka tersebut.

Perhitungan nilai rata-rata dilakukan di dalam sebuah fungsi terpisah bernama `hitungAverage` untuk menunjukkan pemahaman konsep modularisasi kode.

## Cara Menggunakan

Untuk mengompilasi dan menjalankan program ini, Anda memerlukan C++ compiler seperti g++.

1.  **Kompilasi Kode**
    Buka terminal atau command prompt, lalu navigasikan ke direktori tempat Anda menyimpan file `Tugas1Function.cpp`. Jalankan perintah berikut untuk mengompilasi kode:
    ```bash
    g++ Tugas1Function.cpp -o Tugas1Function
    ```

2.  **Jalankan Program**
    Setelah kompilasi berhasil dan menghasilkan file executable, jalankan program dengan perintah:
    ```bash
    ./Tugas1Function
    ```

3.  **Input Angka**
    Program akan meminta Anda untuk memasukkan tiga angka. Masukkan angka satu per satu, lalu tekan Enter setiap kali.

## Informasi Penulis

- **Nama:** M.KRISNA.Y.P
- **Kelas:** Malam Karyawan TI C

## Konsep Fungsi

Program ini menggunakan sebuah *void function* bernama `hitungAverage`. Fungsi ini tidak mengembalikan nilai (*return value*), tetapi langsung melakukan tugasnya, yaitu menghitung rata-rata dan menampilkannya ke layar. Data yang dibutuhkan (jumlah dan banyak data) dikirimkan ke dalam fungsi sebagai parameter.
