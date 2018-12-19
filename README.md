# Car Database .exe
mip-st-11-hlavac-par-rejzx created by GitHub Classroom

This program is aimed for work with database of Cars and their attributes

Program bude vykonávať príkazy načítané zo štandardného vstupu. Každý príkaz bude
predstavovať malé písmeno nasledované znakom konca riadku.

n – je príkaz na načítanie záznamov o autách zo súboru auta.txt do spájaného
zoznamu štruktúr.

Ak zoznam predtým existoval, je potrebné uvoľniť pamäť. Ak nie je možné súbor
otvoriť, program vypíše správu Zaznamy neboli nacitane ukončenú znakom
konca riadku. Ak sa podarilo záznamy načítať, vypíše správu Nacitalo sa x
zaznamov ukončenú znakom konca riadku, pričom x znamená počet načítaných
záznamov.

v – je príkaz na výpis celého spájaného zoznamu záznamov

Formát výpisu je nasledujúci. Pred každým záznamom je uvedené číslo záznamu
(poradie od začiatku zoznamu, začínajúce číslom 1) nasledované bodkou a znakom
konca riadku. Potom nasleduje výpis záznamu, pričom názov položky (bez diakritiky)
je nasledovaný dvojbodkou, medzerou, hodnotou položky a znakom konca riadku. Ak
zoznam neobsahuje záznamy, pri tejto voľbe program negeneruje žiaden výstup.
Ukážka výstupu pre dva vyššie uvedené záznamy:

1.  
kategoria: osobny automobil  
znacka: Ferrari  
predajca: Autobazar Pestovatelska 4 Bratislava  
cena: 5620  
rok_vyroby: 2005  
stav_vozidla: udrziavane cervene dvojdverove  

p – je príkaz na pridanie záznamu do dynamického zoznamu.

Príkaz je v ďalšom riadku nasledovaný celým číslom k > 0 vyjadrujúcim pozíciu
(počítanú od 1), na ktorú sa má záznam pridať (záznam z pozície k sa posunie na
pozíciu k+1). Potom nasleduje ďalších 6 riadkov, každý ukončený znakom konca
riadku a obsahujúcim položky záznamu v poradí v akom sú aj v súbore auta.txt.
Ak pozícia k v zozname neexistuje, záznam sa pridá na koniec zoznamu. Pri tejto
voľbe program negeneruje žiaden výstup.

z – je príkaz na zmazanie záznamov o autách podľa značky auta.

Riadok s príkazom z je nasledovaný riadkom obsahujúcim značku auta a ukončený
znakom konca riadku. Program vymaže všetky záznamy obsahujúce zadaný názov
auta, pričom ignoruje rozdiely vo veľkých a malých písmenách. Ak používateľ zadá
značku auta napr. nDa a zoznam obsahuje záznamy so značkou Honda alebo
HYUNDAI, tento príkaz uvedené záznamy vymaže. Pri tomto príkaze program vypíše
správu Vymazalo sa n zaznamov, kde n je počet vymazaných záznamov. Správa
je ukončená znakom konca riadku. 

h - umožní používateľovi vyhľadať a vypísať všetky položky záznamu podľa
značky auta a ceny ponuky.

Riadok s príkazom h je v ďalšom riadku nasledovaný reťazcom (značka auta -
maximálne 50 znakov) a v ďalšom riadku celým číslom c vyjadrujúcim cenu ponuky.
Po zadaní tohto príkazu program vypíše všetky ponuky áut danej značky, ktorých
cena je nižšia alebo rovná zadanej hodnote c. Zadaná značka je zhodná
s vyhľadávanou značkou ak sú reťazce zhodné, pričom je potrebné ošetriť veľkosť
abecedných znakov – napríklad Honda Civic, HonDA ciVIc, HONDA CIVIC, honda
civic sú 4 rovnaké reťazce. Zhodnosť reťazcov je teda určovaná inak ako v príkaze z.
Formát výpisu je rovnaký ako pri príkaze v aj s číslami záznamov, pričom vypísané
záznamy sú číslované od 1 po n, kde n je počet vypísaných záznamov. Záznamy sú
vypísané v poradí v akom sa vyskytujú v spájanom zozname. Ak záznam s ponukou,
ktorej značka sa zhoduje a cena je nižšia, alebo rovná c neexistuje, program vypíše
správu V ponuke nie su pozadovane auta. Správa je ukončená znakom
konca riadku. 

a – je príkaz na aktualizáciu (zmenu) záznamu podľa značky auta a roku výroby.

Riadok s príkazom a je nasledovaný riadkom obsahujúcim značku auta ukončenom
znakom konca riadku a rok výroby ukončený znakom konca riadku. Program
aktualizuje všetky záznamy obsahujúce zadanú značku auta a rok výroby tak, že pri
všetkých týchto záznamoch zníži cenu vozidla o 100. V prípade ak by po znížení bola
cena auta záporné číslo cena sa upraví na 0. Pri tomto príkaze program vypíše správu
Aktualizovalo sa n zaznamov, kde n je počet zmenených záznamov. Správa je
ukončená znakom konca riadku.

k – je príkaz na ukončenie programu.

Ak spájaný zoznam existoval, treba uvoľniť pamäť. Pri tejto voľbe program
negeneruje žiaden výstup.

# Refactoring process



Function fOpen has been structured and refactored
Function fillNode added as refactoring/helping fucntion  
Function showList has been structured and refactored
Function insertAt has been structured and refactored  
Function insertedNode added to help and refactor function insertAt 
Function deleteNodeWithWimularity has been structured and refactored
Function seekNodes structured and refactored  
Function editNode structured and refactored  
Function printfInfo added to help functions editNode and seekNodes  
Function end structured and refactored   
Function freeClose added to help funcion ed for safe ending of program  
Function doubled refactored  
Function init structured and refactored for initializing variables  
