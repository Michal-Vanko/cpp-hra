#include <iostream>
#include <string>
using namespace std;

int main() {
    int volba;

    int ZivotyMage = 80, UtokMage = 15, MaxManaMage = 200, AktualniManaMage = 200, ZlatoMage = 50, LevelMage = 1, ZkusenostiMage = 0;
    string SchopnostiMage = "Fireball, Teleport, Shield";

    int ZivotyTank = 200, UtokTank = 10, MaxManaTank = 50, AktualniManaTank = 50, ZlatoTank = 30, LevelTank = 1, ZkusenostiTank = 0;
    string SchopnostiTank = "Taunt, Shield Wall, Stun";

    int ZivotySamurai = 120, UtokSamurai = 20, MaxManaSamurai = 100, AktualniManaSamurai = 100, ZlatoSamurai = 40, LevelSamurai = 1, ZkusenostiSamurai = 0;
    string SchopnostiSamurai = "Slash, Focus, Quick Step";

    int ZivotyBerserk = 150, UtokBerserk = 25, MaxManaBerserk = 80, AktualniManaBerserk = 80, ZlatoBerserk = 35, LevelBerserk = 1, ZkusenostiBerserk = 0;
    string SchopnostiBerserk = "Rage, Smash, Frenzy";

    cout << "Vitej!" << endl;
    cout << "Vyber si classu." << endl << endl;

    cout << "Informace o classach:" << endl;

    cout << "1. Mage" << endl;
    cout << "Max zivoty: " << ZivotyMage << endl;
    cout << "Utok: " << UtokMage << endl;
    cout << "Max mana/energie: " << MaxManaMage << endl;
    cout << "Aktualni mana/energie: " << AktualniManaMage << endl;
    cout << "Penize/zlato: " << ZlatoMage << endl;
    cout << "Level: " << LevelMage << endl;
    cout << "Zkusenosti: " << ZkusenostiMage << endl;
    cout << "Schopnosti: " << SchopnostiMage << endl;

    cout << endl << "2. Tank" << endl;
    cout << "Max zivoty: " << ZivotyTank << endl;
    cout << "Utok: " << UtokTank << endl;
    cout << "Max mana/energie: " << MaxManaTank << endl;
    cout << "Aktualni mana/energie: " << AktualniManaTank << endl;
    cout << "Penize/zlato: " << ZlatoTank << endl;
    cout << "Level: " << LevelTank << endl;
    cout << "Zkusenosti: " << ZkusenostiTank << endl;
    cout << "Schopnosti: " << SchopnostiTank << endl;

    cout << endl << "3. Samurai" << endl;
    cout << "Max zivoty: " << ZivotySamurai << endl;
    cout << "Utok: " << UtokSamurai << endl;
    cout << "Max mana/energie: " << MaxManaSamurai << endl;
    cout << "Aktualni mana/energie: " << AktualniManaSamurai << endl;
    cout << "Penize/zlato: " << ZlatoSamurai << endl;
    cout << "Level: " << LevelSamurai << endl;
    cout << "Zkusenosti: " << ZkusenostiSamurai << endl;
    cout << "Schopnosti: " << SchopnostiSamurai << endl;

    cout << endl << "4. Berserk" << endl;
    cout << "Max zivoty: " << ZivotyBerserk << endl;
    cout << "Utok: " << UtokBerserk << endl;
    cout << "Max mana/energie: " << MaxManaBerserk << endl;
    cout << "Aktualni mana/energie: " << AktualniManaBerserk << endl;
    cout << "Penize/zlato: " << ZlatoBerserk << endl;
    cout << "Level: " << LevelBerserk << endl;
    cout << "Zkusenosti: " << ZkusenostiBerserk << endl;
    cout << "Schopnosti: " << SchopnostiBerserk << endl;

    cout << endl << "Kterou classu by jsi chtel?" << endl;
    cout << "1. Mage" << endl;
    cout << "2. Tank" << endl;
    cout << "3. Samurai" << endl;
    cout << "4. Berserk" << endl;
    cout << "Zadej cislo (1-4) pro vyber nebo 0 pro ukonceni: ";
    cin >> volba;

    if (volba == 0) {
        cout << "Ukoncujici program." << endl;
        return 0;
    }

    int hracZivoty = 0;
    int hracUtok = 0;
    int hracMana = 0;

    switch (volba) {
        case 1:
            cout << endl << "Vybral sis classu: Mage" << endl;
            hracZivoty = ZivotyMage;
            hracUtok = UtokMage;
            hracMana = AktualniManaMage;
            break;
        case 2:
            cout << endl << "Vybral sis classu: Tank" << endl;
            hracZivoty = ZivotyTank;
            hracUtok = UtokTank;
            hracMana = AktualniManaTank;
            break;
        case 3:
            cout << endl << "Vybral sis classu: Samurai" << endl;
            hracZivoty = ZivotySamurai;
            hracUtok = UtokSamurai;
            hracMana = AktualniManaSamurai;
            break;
        case 4:
            cout << endl << "Vybral sis classu: Berserk" << endl;
            hracZivoty = ZivotyBerserk;
            hracUtok = UtokBerserk;
            hracMana = AktualniManaBerserk;
            break;
        default:
            cout << "Neplatna volba. Zkus to znovu." << endl;
            return 0;
    }

    int nepritelZivoty = 120;
    int nepritelUtok = 25;

    cout << endl << "Objevilo se monstrum. Zkus prezit" << endl;

    while (hracZivoty > 0 && nepritelZivoty > 0) {
        cout << endl;
        cout << "Tve zivoty: " << hracZivoty << ", Mana: " << hracMana << endl;
        cout << "Nepritel zivoty: " << nepritelZivoty << endl;
        cout << "1. Utok" << endl;
        cout << "2. Schopnost (stoji 30 many, zpusobi +20 dmg)" << endl;
        cout << "Vyber akci: ";

        int akce;
        cin >> akce;

        switch (akce) {
            case 1:
                nepritelZivoty -= hracUtok;
                cout << "Zautocil jsi za " << hracUtok << "!" << endl;
                break;
            case 2:
                if (hracMana >= 30) {
                    nepritelZivoty -= (hracUtok + 20);
                    hracMana -= 30;
                    cout << "Pouzil jsi schopnost za " << hracUtok + 20 << "!" << endl;
                } else {
                    cout << "Nemas dost many!" << endl;
                    continue;
                }
                break;
            default:
                cout << "Neplatna akce!" << endl;
                continue;
        }

        if (nepritelZivoty <= 0) {
            break;
        }

        cout << "Nepritel te zasahl za " << nepritelUtok << "!" << endl;
        hracZivoty -= nepritelUtok;
    }

    if (hracZivoty > 0) {
        cout << endl << "Prezil si. Dobre ty" << endl;
        int vyhraZlato = 20;
        cout << "Ziskal jsi " << vyhraZlato << " zlata." << endl;

        switch (volba) {
            case 1: ZlatoMage += vyhraZlato; break;
            case 2: ZlatoTank += vyhraZlato; break;
            case 3: ZlatoSamurai += vyhraZlato; break;
            case 4: ZlatoBerserk += vyhraZlato; break;
        }

        cout << endl << "Dorazil jsi do vesnice." << endl;
        bool veVesnici = true;

        while (veVesnici) {
            int zlato = 0;
            switch (volba) {
                case 1: zlato = ZlatoMage; break;
                case 2: zlato = ZlatoTank; break;
                case 3: zlato = ZlatoSamurai; break;
                case 4: zlato = ZlatoBerserk; break;
            }

            cout << endl << "Mas " << zlato << " zlata." << endl;
            cout << "Co si chces koupit?" << endl;
            cout << "1. Doplnit zivoty (10 zlata, +30 zivotu)" << endl;
            cout << "2. Doplnit manu (5 zlata, +30 many)" << endl;
            cout << "3. Zvysit utok (15 zlata, +5 utoku)" << endl;
            cout << "0. Odejit z vesnice" << endl;
            cout << "Zadej volbu: ";

            int obchodVolba;
            cin >> obchodVolba;

            switch (obchodVolba) {
                case 1:
                    if (zlato >= 10) {
                        hracZivoty += 30;
                        zlato -= 10;
                        cout << "Zivoty zvyseny o 30." << endl;
                    } else {
                        cout << "Nemas dost zlata." << endl;
                    }
                    break;
                case 2:
                    if (zlato >= 5) {
                        hracMana += 30;
                        zlato -= 5;
                        cout << "Mana zvysena o 30." << endl;
                    } else {
                        cout << "Nemas dost zlata." << endl;
                    }
                    break;
                case 3:
                    if (zlato >= 15) {
                        hracUtok += 5;
                        zlato -= 15;
                        cout << "Utok zvysen o 5." << endl;
                    } else {
                        cout << "Nemas dost zlata." << endl;
                    }
                    break;
                case 0:
                    veVesnici = false;
                    cout << "Opoustis vesnici." << endl;
                    break;
                default:
                    cout << "Neplatna volba." << endl;
            }

            switch (volba) {
                case 1: ZlatoMage = zlato; break;
                case 2: ZlatoTank = zlato; break;
                case 3: ZlatoSamurai = zlato; break;
                case 4: ZlatoBerserk = zlato; break;
            }
        }

        cout << endl << "Zautocila na tebe 2 monstra!" << endl;

        int nepritel1Zivoty = 80;
        int nepritel1Utok = 12;

        int nepritel2Zivoty = 80;
        int nepritel2Utok = 12;

        while (hracZivoty > 0 && (nepritel1Zivoty > 0 || nepritel2Zivoty > 0)) {
            cout << endl;
            cout << "Tve zivoty: " << hracZivoty << ", Mana: " << hracMana << endl;
            cout << "Nepritel 1 zivoty: " << nepritel1Zivoty << endl;
            cout << "Nepritel 2 zivoty: " << nepritel2Zivoty << endl;

            cout << "1. Utok nepritele 1" << endl;
            cout << "2. Utok nepritele 2" << endl;
            cout << "3. Schopnost na nepritele 1 (stoji 30 many, +20 dmg)" << endl;
            cout << "4. Schopnost na nepritele 2 (stoji 30 many, +20 dmg)" << endl;
            cout << "Vyber akci: ";

            int akce2;
            cin >> akce2;

            switch (akce2) {
                case 1:
                    if (nepritel1Zivoty > 0) {
                        nepritel1Zivoty -= hracUtok;
                        cout << "Zautocil jsi na nepritele 1 za " << hracUtok << "!" << endl;
                    } else {
                        cout << "Nepritel 1 je jiz mrtvy." << endl;
                        continue;
                    }
                    break;
                case 2:
                    if (nepritel2Zivoty > 0) {
                        nepritel2Zivoty -= hracUtok;
                        cout << "Zautocil jsi na nepritele 2 za " << hracUtok << "!" << endl;
                    } else {
                        cout << "Nepritel 2 je jiz mrtvy." << endl;
                        continue;
                    }
                    break;
                case 3:
                    if (hracMana >= 30) {
                        if (nepritel1Zivoty > 0) {
                            nepritel1Zivoty -= (hracUtok + 20);
                            hracMana -= 30;
                            cout << "Pouzil jsi schopnost na nepritele 1 za " << hracUtok + 20 << "!" << endl;
                        } else {
                            cout << "Nepritel 1 je jiz mrtvy." << endl;
                            continue;
                        }
                    } else {
                        cout << "Nemas dost many!" << endl;
                        continue;
                    }
                    break;
                case 4:
                    if (hracMana >= 30) {
                        if (nepritel2Zivoty > 0) {
                            nepritel2Zivoty -= (hracUtok + 20);
                            hracMana -= 30;
                            cout << "Pouzil jsi schopnost na nepritele 2 za " << hracUtok + 20 << "!" << endl;
                        } else {
                            cout << "Nepritel 2 je jiz mrtvy." << endl;
                            continue;
                        }
                    } else {
                        cout << "Nemas dost many!" << endl;
                        continue;
                    }
                    break;
                default:
                    cout << "Neplatna akce!" << endl;
                    continue;
            }

            if (nepritel1Zivoty <= 0 && nepritel2Zivoty <= 0) {
                break;
            }

            if (nepritel1Zivoty > 0) {
                cout << "Nepritel 1 te zasahl za " << nepritel1Utok << "!" << endl;
                hracZivoty -= nepritel1Utok;
            }
            if (nepritel2Zivoty > 0) {
                cout << "Nepritel 2 te zasahl za " << nepritel2Utok << "!" << endl;
                hracZivoty -= nepritel2Utok;
            }
        }

        if (hracZivoty > 0) {
            cout << endl << "Double kill, zabil si obe monstra!" << endl;
        } else {
            cout << endl << "Bohuzel, prohral jsi druhy boj." << endl;
        }
    } else {
        cout << endl << "Hm.. tak jsi neprezil no.. stava se.." << endl;
    }

    return 0;
}
