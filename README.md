# Studentai.2

Ankstesnės programos (Studentai) programos tolimesnis kūrimas

## Ankstesnes versijas galite rasti čia:

[Nuoroda į ankstesnes versija] - https://github.com/lauris75/studentai

## Naudojimas

Norint naudoti šios programos kai kurias funkcijas (visas be generavimo arba pačiam įvedimo)
Reikės susikurti .txt failą, pavadinimu kursiokai (kursiokai.txt) ir įdėti į programos aplankalą.
Kursiokai failo struktūra turi būti tokia:

Pirmoje eilutėje:
Vardas Pavardė ND1 ND2 ND3 ND4 ..... NDn Egzaminas

Visose kitose eilutėse atitinkamai pagal stulpelius turi būti išdėlioti duomenys:
Vardenis Pavardenis 5 8 9 4 2 6 7 5 6 9

Duomenys gali būti ir neišlygiuoti.

## Rezultatai lyginant ankstesnę structūrą ir dabartinę klasę

-Duomenims įtakos taip pat turėjo naudoti kompiliavimo flag'ai.
-Duomenys (toliau pateikti) yra skirstomi pagal:
-Duomenų kiekį (10k ir 100k)
-Naudotus kintamuosius (klasė ir struktūra)
-Kompiliavimo vėliavėlės (be, -O1, -O2 ir -O3)

#### Struktūrai be kompiliavimo flag'ų (10k studentų):
- Duomenų ivedimui į listą prireikė 31200100 nanosekundžių. ~(0,031 sec)
- Duomenų liste išrūšiavimui prireikė 15600000 nanosekundžių. ~(0,0156 sec)
- Duomenų išvedimui liste prireikė 156000300 nanosekundžių. ~(0,156 sec)

#### Struktūrai be kompiliavimo flag'ų (100k studentų):
- Duomenų ivedimui į listą prireikė 390000600 nanosekundžių. ~(0,39 sec)
- Duomenų liste išrūšiavimui prireikė 142400400 nanosekundžių. ~(0,142 sec)
- Duomenų išvedimui liste prireikė 826801400 nanosekundžių. ~(0,827 sec)

#### Struktūrai su -O1 flag'u (10k studentų):
- Duomenų ivedimui į listą prireikė 15600100 nanosekundžių. ~(0,0156 sec)
- Duomenų liste išrūšiavimui prireikė 15600000 nanosekundžių. ~(0,0156 sec)
- Duomenų išvedimui liste prireikė 93600100 nanosekundžių. ~(0,0936 sec)

#### Struktūrai su -O1 flag'u (100k studentų):
- Duomenų ivedimui į listą prireikė 296400500 nanosekundžių. ~(0,296 sec)
- Duomenų liste išrūšiavimui prireikė 62400100 nanosekundžių. ~(0,0624 sec)
- Duomenų išvedimui liste prireikė 795601400 nanosekundžių. ~(0,796 sec)

#### Struktūrai su -O2 flag'u (10k studentų):
- Duomenų ivedimui į listą prireikė 15600000 nanosekundžių. ~(0,0156 sec)
- Duomenų liste išrūšiavimui prireikė 15600000 nanosekundžių. ~(0,0156 sec)
- Duomenų išvedimui liste prireikė 78000200 nanosekundžių. ~(0,078 sec)

#### Struktūrai su -O2 flag'u (100k studentų):
- Duomenų ivedimui į listą prireikė 280800400 nanosekundžių. ~(0,28 sec)
- Duomenų liste išrūšiavimui prireikė 62400200 nanosekundžių. ~(0,0624 sec)
- Duomenų išvedimui liste prireikė 795601300 nanosekundžių. ~(0,796 sec)

#### Struktūrai su -O3 flag'u (10k studentų):
- Duomenų ivedimui į listą prireikė 31200100 nanosekundžių. ~(0,031 sec)
- Duomenų liste išrūšiavimui prireikė 0 nanosekundžių. ~(0,0 sec)
- (Šią dalį tikriausiai procesorius atliko per viena tick'ą, todėl nematė skirtumo tarp pradžios ir pabaigos laiko)
- Duomenų išvedimui liste prireikė 93600200 nanosekundžių. ~(0,0936 sec)

#### Struktūrai su -O3 flag'u (100k studentų):
- Duomenų ivedimui į listą prireikė 309017600 nanosekundžių. ~(0,309 sec)
- Duomenų liste išrūšiavimui prireikė 54003100 nanosekundžių. ~(0,054 sec)
- Duomenų išvedimui liste prireikė 836047800 nanosekundžių. ~(0,836 sec)

#### Klasei be kompiliavimo flag'ų (10k studentų):
- Duomenų ivedimui į listą prireikė 893584640 nanosekundžių. ~(0,894 sec)
- Duomenų liste išrūšiavimui prireikė 1452333370 nanosekundžių. ~(1,452 sec)
- Duomenų išvedimui liste prireikė 146664034 nanosekundžių. ~(0,147 sec)

#### Klasei be kompiliavimo flag'ų (100k studentų):
- Duomenų ivedimui į listą prireikė 8945388188 nanosekundžių. ~(8,945 sec)
- Duomenų liste išrūšiavimui prireikė 16631773560 nanosekundžių. ~(16,632 sec)
- Duomenų išvedimui liste prireikė 1391760102 nanosekundžių. ~(1,392 sec)

#### Klasei su -O1 flag'u (10k studentų):
- Duomenų ivedimui į listą prireikė 15600000 nanosekundžių. ~(0,0156 sec)
- Duomenų liste išrūšiavimui prireikė 62400100 nanosekundžių. ~(0,0624 sec)
- Duomenų išvedimui liste prireikė 46800100 nanosekundžių. ~(0,0468 sec)

#### Klasei su -O1 flag'u (100k studentų):
- Duomenų ivedimui į listą prireikė 296400500 nanosekundžių. ~(0,296 sec)
- Duomenų liste išrūšiavimui prireikė 561601000 nanosekundžių. ~(0,562 sec)
- Duomenų išvedimui liste prireikė 343200600 nanosekundžių. ~(0,343 sec)

#### Klasei su -O2 flag'u (10k studentų):
- Duomenų ivedimui į listą prireikė 31200100 nanosekundžių. ~(0,0312 sec)
- Duomenų liste išrūšiavimui prireikė 62400100 nanosekundžių. ~(0,0624 sec)
- Duomenų išvedimui liste prireikė 31200100 nanosekundžių. ~(0,0312 sec)

#### Klasei su -O2 flag'u (100k studentų):
- Duomenų ivedimui į listą prireikė 280800500 nanosekundžių. ~(0,28 sec)
- Duomenų liste išrūšiavimui prireikė 564601200 nanosekundžių. ~(0,564 sec)
- Duomenų išvedimui liste prireikė 343200600 nanosekundžių. ~(0,343 sec)

#### Klasei su -O3 flag'u (10k studentų):
- Duomenų ivedimui į listą prireikė 15600000 nanosekundžių. ~(0,0156 sec)
- Duomenų liste išrūšiavimui prireikė 62400100 nanosekundžių. ~(0,0624 sec)
- Duomenų išvedimui liste prireikė 46800100 nanosekundžių. ~(0,0468 sec)

#### Klasei su -O3 flag'u (100k studentų):
- Duomenų ivedimui į listą prireikė 280800500 nanosekundžių. ~(0,28 sec)
- Duomenų liste išrūšiavimui prireikė 546001000 nanosekundžių. ~(0,546 sec)
- Duomenų išvedimui liste prireikė 343200600 nanosekundžių. ~(0,343 sec)

## Versijos

### [v2.0](https://github.com/lauris75/Studentai.2/releases/tag/Stud2.0.1v) - (2018-05-19)
**Pridėta**
-Makefile

### [v2.0](https://github.com/lauris75/Studentai.2/releases/tag/Studentai2.0v) - (2018-05-19)
**Pridėta**
- Unit tests
- Doxygen dokumentacija

### [v1.3](https://github.com/lauris75/Studentai.2/releases/tag/Stud1.3v) - (2018-05-05)
**Pridėta**
- Virtualios funkcijos
***Pakeista***
- Iš Stud klasės padarytos dvi klasės (Bazine ir isvestine (isvesta))
### [v1.2](https://github.com/lauris75/Studentai.2/releases/tag/Stud1.2v) - (2018-04-28)
***Pridėta***
- Pridėta klasė su kompelksiniais skaičiais, kurioje realizuoti loginiai operatoriai.

### [v1.1](https://github.com/lauris75/studentai/releases/tag/untagged-9b4ad8c4d659ff6c0e8e) - (2018-04-20)
***Pakeista***
- Vietoj anksčiau naudotos structūros dabar yra klasė.
- Visa programa pakeista atitinkamose vietose, kad veiktų su pakeistu kintamojo tipu.
