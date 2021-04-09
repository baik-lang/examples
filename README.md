# BAIK Examples
BAIK Examples adalah kumpulan sumber daya (source code) program [BAIK](https://sourceforge.net/projects/baik/).

## Memasang

- Anda sudah menginstall bahasa [BAIK](https://sourceforge.net/projects/baik/)
- Silahkan klon repo ini, dan
- Jalankan

## Contoh sederhana
- Perulangan

```shell
isi a = 0;
ulang(a < 10){
    tulis("ulang",a);
    a++;
}
tulis("-------------------");
untuk(isi b=0;b < 10; b++){
    tulis("untuk",b);
}
```
- Menghitung luas segitiga
```shell
# Contoh program untuk menghitung luas lingkaran
# @created Billal Fauzan

tulis "Masukan nilai alas: "
masuk var_alas
tulis "Masukan nilai tinggi: "
masuk var_tinggi

luas = (var_alas*var_tinggi)/2
tulis "Luas: ", luas, "\n"
```
