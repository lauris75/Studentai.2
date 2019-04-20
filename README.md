# Studentai.2

Ankstesnės programos (Studentai) programos tolimesnis kūrimas

## Ankstesnes versijas galite rasti čia:

[Nuoroda į ankstesnes versija] - https://github.com/lauris75/studentai

## Rezultatai lyginant ankstesnę structūrą ir dabartinę klasę

-Duomenims įtakos taip pat turėjo naudoti kompiliavimo flag'ai.
-Duomenys (toliau pateikti) yra skirstomi pagal:
-Duomenų kiekį (10k ir 100k)
-Naudotus kintamuosius (klasė ir struktūra)
-Kompiliavimo vėliavėlės (be, -O1, -O2 ir -O3)

#### Struktūrai be kompiliavimo flag'ų (10k studentų):
Duomenų ivedimui į listą prireikė 31200100 nanosekundžių. ~(0,031 sec)
Duomenų liste išrūšiavimui prireikė 15600000 nanosekundžių. ~(0,0156 sec)
Duomenų išvedimui liste prireikė 156000300 nanosekundžių. ~(0,156 sec)

#### Struktūrai be kompiliavimo flag'ų (100k studentų):
Duomenų ivedimui į listą prireikė 390000600 nanosekundžių. ~(0,39 sec)
Duomenų liste išrūšiavimui prireikė 142400400 nanosekundžių. ~(0,142 sec)
Duomenų išvedimui liste prireikė 826801400 nanosekundžių. ~(0,827 sec)

#### Struktūrai su -O1 flag'u (10k studentų):
Duomenų ivedimui į listą prireikė 15600100 nanosekundžių. ~(0,0156 sec)
Duomenų liste išrūšiavimui prireikė 15600000 nanosekundžių. ~(0,0156 sec)
Duomenų išvedimui liste prireikė 93600100 nanosekundžių. ~(0,0936 sec)

#### Struktūrai su -O1 flag'u (100k studentų):
Duomenų ivedimui į listą prireikė 296400500 nanosekundžių. ~(0,296 sec)
Duomenų liste išrūšiavimui prireikė 62400100 nanosekundžių. ~(0,0624 sec)
Duomenų išvedimui liste prireikė 795601400 nanosekundžių. ~(0,796 sec)

#### Struktūrai su -O2 flag'u (10k studentų):
Duomenų ivedimui į listą prireikė 15600000 nanosekundžių. ~(0,0156 sec)
Duomenų liste išrūšiavimui prireikė 15600000 nanosekundžių. ~(0,0156 sec)
Duomenų išvedimui liste prireikė 78000200 nanosekundžių. ~(0,078 sec)

#### Struktūrai su -O2 flag'u (100k studentų):
Duomenų ivedimui į listą prireikė 280800400 nanosekundžių. ~(0,28 sec)
Duomenų liste išrūšiavimui prireikė 62400200 nanosekundžių. ~(0,0624 sec)
Duomenų išvedimui liste prireikė 795601300 nanosekundžių. ~(0,796 sec)

#### Struktūrai su -O3 flag'u (10k studentų):
Duomenų ivedimui į listą prireikė 31200100 nanosekundžių. ~(0,031 sec)
Duomenų liste išrūšiavimui prireikė 0 nanosekundžių. ~(0,0 sec)
(Šią dalį tikriausiai procesorius atliko per viena tick'ą, todėl nematė skirtumo tarp pradžios ir pabaigos laiko)
Duomenų išvedimui liste prireikė 93600200 nanosekundžių. ~(0,0936 sec)

#### Struktūrai su -O3 flag'u (100k studentų):
Duomenų ivedimui į listą prireikė 309017600 nanosekundžių. ~(0,309 sec)
Duomenų liste išrūšiavimui prireikė 54003100 nanosekundžių. ~(0,054 sec)
Duomenų išvedimui liste prireikė 836047800 nanosekundžių. ~(0,836 sec)

#### Klasei be kompiliavimo flag'ų (10k studentų):
Duomenų ivedimui į listą prireikė 893584640 nanosekundžių. ~(0,894 sec)
Duomenų liste išrūšiavimui prireikė 1452333370 nanosekundžių. ~(1,452 sec)
Duomenų išvedimui liste prireikė 146664034 nanosekundžių. ~(0,147 sec)

#### Klasei be kompiliavimo flag'ų (100k studentų):
Duomenų ivedimui į listą prireikė 8945388188 nanosekundžių. ~(8,945 sec)
Duomenų liste išrūšiavimui prireikė 16631773560 nanosekundžių. ~(16,632 sec)
Duomenų išvedimui liste prireikė 1391760102 nanosekundžių. ~(1,392 sec)

#### Klasei su -O1 flag'u (10k studentų):
Duomenų ivedimui į listą prireikė 15600000 nanosekundžių. ~(0,0156 sec)
Duomenų liste išrūšiavimui prireikė 62400100 nanosekundžių. ~(0,0624 sec)
Duomenų išvedimui liste prireikė 46800100 nanosekundžių. ~(0,0468 sec)

#### Klasei su -O1 flag'u (100k studentų):
Duomenų ivedimui į listą prireikė 296400500 nanosekundžių. ~(0,296 sec)
Duomenų liste išrūšiavimui prireikė 561601000 nanosekundžių. ~(0,562 sec)
Duomenų išvedimui liste prireikė 343200600 nanosekundžių. ~(0,343 sec)

#### Klasei su -O2 flag'u (10k studentų):
Duomenų ivedimui į listą prireikė 31200100 nanosekundžių. ~(0,0312 sec)
Duomenų liste išrūšiavimui prireikė 62400100 nanosekundžių. ~(0,0624 sec)
Duomenų išvedimui liste prireikė 31200100 nanosekundžių. ~(0,0312 sec)

#### Klasei su -O2 flag'u (100k studentų):
Duomenų ivedimui į listą prireikė 280800500 nanosekundžių. ~(0,28 sec)
Duomenų liste išrūšiavimui prireikė 564601200 nanosekundžių. ~(0,564 sec)
Duomenų išvedimui liste prireikė 343200600 nanosekundžių. ~(0,343 sec)

#### Klasei su -O3 flag'u (10k studentų):
Duomenų ivedimui į listą prireikė 15600000 nanosekundžių. ~(0,0156 sec)
Duomenų liste išrūšiavimui prireikė 62400100 nanosekundžių. ~(0,0624 sec)
Duomenų išvedimui liste prireikė 46800100 nanosekundžių. ~(0,0468 sec)

#### Klasei su -O3 flag'u (100k studentų):
Duomenų ivedimui į listą prireikė 280800500 nanosekundžių. ~(0,28 sec)
Duomenų liste išrūšiavimui prireikė 546001000 nanosekundžių. ~(0,546 sec)
Duomenų išvedimui liste prireikė 343200600 nanosekundžių. ~(0,343 sec)

### [v1.1](https://github.com/lauris75/studentai/releases/tag/untagged-9b4ad8c4d659ff6c0e8e) - (2018-04-20)
***Pakeista***
- Vietoj anksčiau naudotos structūros dabar yra klasė.
- Visa programa pakeista atitinkamose vietose, kad veiktų su pakeistu kintamojo tipu.

#### Struktūrai be kompiliavimo flag'ų (100k studentų):
Duomenų ivedimui į listą prireikė  nanosekundžių. ~(0,031 sec)
Duomenų liste išrūšiavimui prireikė  nanosekundžių. ~(0,0156 sec)
Duomenų išvedimui liste prireikė  nanosekundžių. ~(0,156 sec)
