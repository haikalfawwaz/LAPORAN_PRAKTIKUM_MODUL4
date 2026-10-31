while True:
    print("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit")
    pilihan = int(input("Masukkan Pilihan : "))
    
    if pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator Muhammad Haikal Fawwaz")
        break
        
    if pilihan < 1 or pilihan > 5:
        print("Input anda salah, silahkan coba lagi\n")
        continue
        
    nilai1 = float(input("Masukkan nilai pertama : "))
    nilai2 = float(input("Masukkan nilai kedua : "))
    
    if pilihan == 1:
        print(f"Hasil Penjumlahan antara {nilai1:.2f} dengan {nilai2:.2f} adalah {nilai1 + nilai2:.2f}\n")
    elif pilihan == 2:
        print(f"Hasil Pengurangan antara {nilai1:.2f} dengan {nilai2:.2f} adalah {nilai1 - nilai2:.2f}\n")
    elif pilihan == 3:
        print(f"Hasil Perkalian antara {nilai1:.2f} dengan {nilai2:.2f} adalah {nilai1 * nilai2:.2f}\n")
    elif pilihan == 4:
        print(f"Hasil Pembagian antara {nilai1:.2f} dengan {nilai2:.2f} adalah {nilai1 / nilai2:.2f}\n")