# Matematikai feladatok C nyelven

Ez a gyűjtemény 10 tipikus, egymásra épülő matematikai feladatot tartalmaz C nyelven.  
Minden feladatnál meg van adva a probléma rövid leírása, a függvény neve, a bemenet és a visszatérési érték típusa.

---

## 1. Összegzés (1-től N-ig)
- **Feladat:** Számítsd ki az 1-től N-ig terjedő számok összegét.
- **Függvény neve:** `sum_to_n`
- **Paraméterek:** `int n` – a felső határ.
- **Visszatérési érték:** `int` – az összeg (pl. `n=5` → `15`).

---

## 2. Faktoriális
- **Feladat:** Számítsd ki egy egész szám faktoriálisát.
- **Függvény neve:** `factorial`
- **Paraméterek:** `int n` – a szám (ha negatív → hibajelzésként `-1`).
- **Visszatérési érték:** `long long` – `n!` értéke.

---

## 3. Fibonacci szám
- **Feladat:** Add vissza az `n`-edik Fibonacci-számot (0. elem = 0, 1. elem = 1).
- **Függvény neve:** `fibonacci`
- **Paraméterek:** `int n` – index (ha negatív → hibajelzés `-1`).
- **Visszatérési érték:** `long long` – az `n`-edik Fibonacci-szám.

---

## 4. Prímszám ellenőrzés
- **Feladat:** Állapítsd meg, hogy egy szám prím-e.
- **Függvény neve:** `is_prime`
- **Paraméterek:** `int n` – a vizsgált szám.
- **Visszatérési érték:** `int` – `1`, ha prím, `0`, ha nem.

---

## 5. Legnagyobb közös osztó (LNKO – Euclid algoritmus)
- **Feladat:** Számítsd ki két egész szám legnagyobb közös osztóját.
- **Függvény neve:** `gcd`
- **Paraméterek:** `int a, int b` – a két szám.
- **Visszatérési érték:** `int` – az LNKO értéke.

---

## 6. Legkisebb közös többszörös (LKKT)
- **Feladat:** Számítsd ki két egész szám legkisebb közös többszörösét.
- **Függvény neve:** `lcm`
- **Paraméterek:** `int a, int b` – a két szám.
- **Visszatérési érték:** `int` – az LKKT értéke. (Ha bármelyik 0, eredmény 0.)

---

## 7. Számjegyek összege
- **Feladat:** Számítsd ki egy egész szám számjegyeinek összegét.
- **Függvény neve:** `digit_sum`
- **Paraméterek:** `int n` – a vizsgált szám.
- **Visszatérési érték:** `int` – a számjegyek összege.

---

## 8. Armstrong-szám ellenőrzés
- **Feladat:** Döntsd el, hogy egy szám Armstrong-szám-e (pl. 153 = 1³+5³+3³).
- **Függvény neve:** `is_armstrong`
- **Paraméterek:** `int n` – a vizsgált szám.
- **Visszatérési érték:** `int` – `1`, ha Armstrong-szám, `0`, ha nem.

---

## 9. Mátrix transzponálás
- **Feladat:** Fordítsd meg a mátrix sorait és oszlopait (transzponálás).
- **Függvény neve:** `transpose`
- **Paraméterek:**
    - `int n, int m` – mátrix mérete (n×m)
    - `int A[n][m]` – eredeti mátrix
    - `int B[m][n]` – eredmény tárolója
- **Visszatérési érték:** nincs (`void`), az eredmény `B`-ben lesz.

---

## 10. Mátrix szorzás
- **Feladat:** Szorozz össze két mátrixot: A (n×m) és B (m×p), eredmény: C (n×p).
- **Függvény neve:** `multiply`
- **Paraméterek:**
    - `int n, int m, int p` – mátrixok mérete
    - `int A[n][m]`, `int B[m][p]` – bemeneti mátrixok
    - `int C[n][p]` – eredmény tárolója
- **Visszatérési érték:** nincs (`void`), az eredmény `C`-ben lesz.

---
