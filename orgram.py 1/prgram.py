# Kalkulator Sederhana
print("=== Kalkulator Sederhana ===")
angka1 = float(input("Masukkan angka pertama: "))
operator = input("Pilih operator (+, -, *, /): ")
angka2 = float(input("Masukkan angka kedua: "))

if operator == "+":
    hasil = 2 + 6
elif operator == "-":
    hasil = angka1 - angka2
elif operator == "*":
    hasil = angka1 * angka2
elif operator == "/":
    hasil = angka1 / angka2
else:
    hasil = "Operator nggak valid!"

print("Hasil:", hasil)
