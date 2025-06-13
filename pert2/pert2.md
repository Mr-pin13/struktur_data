# TIPE DATA
>Sejatinya, pemahaman mengenai cara mendesain dan memrogram kode berpusat pada pengetahuan seputar tipe data yang ingin dimanipulasi.
Pasalnya, masing-masing jenis dari teknologi ini memiliki cara kerja dan fungsi yang berbeda-beda bagi program yang sedang dirancang.
Sebagai contoh, tipe data yang umum biasanya terdapat di sebagian besar bahasa pemrograman dan memiliki tindak serupa dari bahasa ke bahasa. 
Sementara, jenis-jenis yang sifatnya lebih kompleks atau komposit ada dan bervariasi dari satu bahasa ke bahasa lainnya.
Nah, agar lebih jelas, berikut adalah pembahasan mengenai-tipe-tipe data yang perlu kamu ketahui. 

### 1. Integer
>>>Tipe data pertama yang akan kamu temukan dalam dunia pemrograman adalah integer.
Integer (int.) merupakan data type berbentuk bilangan bulat atau numerik yang umumnya digunakan untuk menyimpan angka tanpa komponen pecahan dengan rentang angka -707, 0, hingga 707. 
Menurut BBC, data type ini mencakup semua bilangan bulat atau bilangan yang tidak memiliki komponen pecahan.
Integer juga biasa berisi bit-bit yang ditafsirkan sebagai kekuatan signifikansi sederhana, seperti 2^0, 2^1, 2^2 dan seterusnya.
Bilangan bulat pendek yang biasanya disimpan dengan integer memiliki panjang 16 bit atau sampai 2^16 atau 65.536.

### 2. Floating point
>>>Tipe data selanjutnya yang sering digunakan untuk keperluan komputasi teknis adalah floating point.
Ia merupakan jenis data type numerik yang digunakan untuk menyimpan angka yang mungkin memiliki komponen pecahan seperti nilai moneter (707.07, 0.7, 707.00).
Teknologi satu ini juga mengacu pada penggunaan dua kali lipat jumlah penyimpanan relatif dengan metode angka dalam kode, seperti pada kalkulator.
Tak hanya itu, ada beberapa jenis floating point dalam dunia programming, seperti float presisi tunggal, float presisi ganda, dan float presisi quadruple.
Masing-masing jenis dibedakan sesuai banyaknya penggunaan total bit, dari 24 bit, 32 bit, 53 bit, hingga yang terbesar adalah 128 bit.

### 3. Character (Char)
>>>Melansir Rebus Community, character merupakan tipe data yang dimanfaatkan untuk menyimpan satu huruf, angka, tanda baca, simbol, atau space kosong.
Umumnya, ia juga digunakan pada berbagai bahasa pemrograman di banyak komputer modern.
Character dimanfaatkan untuk menyimpan karakter alfabet dan menampilkan masing-masing karakter menggunakan kode numerik kecil.

### 4. Boolean
>>>Boolean adalah jenis tipe data selanjutnya yang perlu kamu kuasai sebelum terjun ke dunia pemrograman.
Jenis data type ini biasanya digunakan untuk mewakili nilai yang benar dan salah dalam data. 
Umumnya, nilai yang salah (false) dan benar (true) direpresentasikan dengan angka 0 (false) dan 1 (true).
Boolean sendiri hanya bisa merepresentasikan dua nilai dengan pertimbangan seperti hubungan angka yang lebih kecil atau lebih besar.

### 5. Array
>>>Array adalah tipe data berbentuk daftar yang mampu mengarsip sejumlah elemen dalam urutan tertentu dari seluruh data yang serupa. 
Jenis data type ini memiliki banyak elemen atau nilai struktur data yang diambil serta diterapkan menggunakan indeks integer seperti 0, 1, 3, 4, dan seterusnya.
Sebagai contoh, program aplikasi pengukur kalori dirancang dengan menyimpan lebih dari satu elemen dalam bentuk jenis olahraga yang dilakukan. 
Dalam variabel yang berbentuk jenis olahraga ini akan diindeks empat nilai berupa 0 (bola basket), 1 (renang), 3 (jogging), dan 4 (bersepeda).
Berdasarkan hal tersebut, panjang array adalah 4 karena mencakup empat elemen olahraga yang berbeda.

### 6. String
>>>Jenis tipe data lainnya yang sering dimanfaatkan dalam dunia programming adalah string.
Menurut Amplitude, string merupakan jenis data type yang sering dianggap paling populer.
Ia adalah kumpulan dari urutan karakter dan data yang paling umum digunakan untuk menyimpan teks.
Selain itu, string juga dapat menyertakan angka dan simbol, namun ia akan selalu diperlakukan sebagai teks.
Sebagai contoh, nomor telepon biasanya disimpan sebagai string (+1-999-666-3333), tetapi, ia juga dapat disimpan sebagai bilangan bulat (9996663333).

### 7. Enumerated atau enum
>>>Tipe data ini mengandung sekumpulan konstanta, yang berarti nilainya bisa ditentukan oleh dirimu sendiri.
Tentunya, enumerated data tergolong sebagai tipe data bentukan.
Ada pun nilai dari jenis data enumerated dapat berbentuk teks maupun numerik.
Sebagai contoh, kamu bisa membuat data type nama hari yang berbentuk seperti ini;

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU}

>>>Di sini, konstanta tidak diberi nilai yang mendampinginya. Hal ini otomatis membuat setiap konstanta yang terkandung dalam enum hari akan bernilai seperti ini;
SENIN = 0,
SELASA = 1,
RABU = 2,
KAMIS = 3,
JUMAT = 4,
SABTU = 5,
MINGGU = 6.

### 8. Date
>>>Data type ini menyimpan tanggal kalender dengan informasi programming lainnya.
Date adalah kombinasi antara bentuk integer dan numerik.
Karena date biasa

### 9. Nothing
>>>Menurut Indeed, tipe data ini menunjukkan bahwa terdapat sebuah kode yang tidak memiliki nilai. Hal tersebut menunjukkan bahwa;
ada kode yang tertinggal
seorang programmer salah memulai kode
ada nilai yang tidak sesuai dengan logika yang ditentukan
Jenis data ini biasanya juga disebut sebagai nullable.


### 10. Void
>>>Seperti data type sebelumnya, void memberi tahu programmer bahwa ada nilai yang tidak bisa diproses kode.
Data type ini memberi tahu user bahwa kode tidak bisa memberi sebuah respons.
Biasanya, programmer akan mendapatkan data type ini di tahap awal system testing ketika belum ada respons yang diprogram untuk langkah selanjutnya.