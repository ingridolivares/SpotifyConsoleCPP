#include <iostream>
#include "Playlist.h"
#include "User.h"
#include "UI.h"
#include "Authentication.h"

int main(){
        Playlist playlist;
        
        Song s1("Across the Universe","The Beatles","lyrics/acrosstheuniverse.txt","audio/acrosstheuniverse.mp3");

        Song s2("All I Wanted","Paramore","lyrics/alliwanted.txt","audio/alliwanted.mp3");
    
        Song s3("Bad Habit","The Offspring","lyrics/theoffspring.txt","audio/theoffspring.mp3");

        Song s4("Basket Case","Green Day","lyrics/basketcase.txt","audio/basketcase.mp3");

        Song s5("Black Sheep","Metric","lyrics/blacksheep.txt","audio/blakcsheep.mp3");

        Song s6("Boulevrd of Broken Dreams","Green Day","lyrics/boulevardofbrokendreams.txt","audio/boulevardofbrokendreams.mp3");
    
        Song s7("Breathe (2AM)","Anna Nalick","lyrics/breathe.txt","audio/breathe.mp3");

        Song s8("Breathe Me","Sia","lyrics/breatheme.txt","audio/bretheme.mp3");

        Song s9("Brave","Sara Bareilles","lyrics/brave.txt","audio/brave.mp3");

        Song s10("Bury Me Face Down","grandson","lyrics/burymefacedown.txt","audio/burymefacedown.mp3");

        Song s11("Cancer","My Chemical Romance","lyrics/cancer.txt","audio/cancer.mp3");
        
        Song s12("Carry On","Fun.","lyrics/carryon.txt","audio/carryon.mp3");
        
        Song s13("Comfortably Numb","Pink Floyd","lyrics/comfortablynumb.txt","audio/confortablynumb.mp3");

        Song s14("Control","Halsey","lyrics/control.txt","audio/control.mp3");

        Song s15("Creep","Radiohead","lyrics/creep.txt","audio/creep.mp3");

        Song s16("Dog Days Are Over","Florence + The Machine","lyrics/dogdaysareover.txt","audio/dogdaysareover.mp3");

        Song s17("Dream On","Aerosmith","lyrics/dreamon.txt","audio/dreamon.mp3");

        Song s18("Dreams","Fleetwood Mac","lyrics/dreams.txt","audio/dreams.mp3");

        Song s19("Dust in the Wind","Kansas","lyrics/dustinthewind.txt","audio/dustinthewind.mp3");

        Song s20("Everybody Wants to Rule the World","Tears for Fears","lyrics/everybodywantstoruletheworld.txt","audio/everybodywantstoruletheworld.mp3");

        Song s21("Everything in Its Right Place","Radiohead","lyrics/everythinginitsrightplace.txt","audio/everythinginitsrightplace.mp3");
        
        Song s22("Feel Good Inc.","Gorillaz","lyrics/feelgoodinc.txt","audio/feelgoodinc.mp3");

        Song s23("Fix You","Coldplay","lyrics/fixyou.txt","audio/fixyou.mp3");

        Song s24("Freaks","Surf Curse","lyrics/freaks.txt","audio/freaks.mp3");

        Song s25("Good Riddance (Time of Your Life)","Green Day","lyrics/goodriddance.txt","audio/goodriddance.mp3");

        Song s26("Home","Phillip Phillips","lyrics/home.txt","audio/home.mp3");

        Song s27("How to Disappear Completely","Radiohead","lyrics/howtodisappearcompletely.txt","audio/howtodisappearcompletely.mp3");

        Song s28("Iris","Goo Goo Dolls","lyrics/iris.txt","audio/iris.mp3");

        Song s29("Killing in the Name","Rage Against the Machine","lyrics/killinginthename.txt","audio/killinginthename.mp3");

        Song s30("Liability","Lorde","lyrics/liability.txt","audio/liability.mp3");

        Song s31("Little Dark Age","MGMT","lyrics/littledarkagge.txt","audio/littledarkage.mp3");

        Song s32("Lost Kitten","Metric","lyrics/lostkitten.txt","audio/lostkitten.mp3");

        Song s33("Mad World","Tears for Fears","lyrics/madworld.txt","audio/madworld.mp3");

        Song s34("Misery Business","Paramore","lyrics/miserybusiness.txt","audio/miserybusiness.mp3");

        Song s35("Monster","Skillet","lyrics/monster.txt","audio/monster.mp3");

        Song s36("My Inmortal","Evanescence","lyrics/myinmortal.txt","audio/myinmortal.mp3");

        Song s37("My Ordinary Life","The Living Tombstone","lyrics/myordinarylife.txt","audio/myordinarylife.mp3");

        Song s38("No One Knows","Queens of the Stone Age","lyrics/nooneknows.txt","audio/nooneknows.mp3");

        Song s39("Nobody","Mitski","lyrics/nobody.txt","audio/nobody.mp3");

        Song s40("Numb","Linkin Park","lyrics/numb.txt","audio/numb.mp3");

        Song s41("Paint It Black","The Rolling Stones","lyrics/paintitblack.txt","audio/paintitblack.mp3");

        Song s42("Paranoid Android","Radiohead","lyrics/paranoidandroid.txt","audio/paranoidandroid.mp3");

        Song s43("People Are Strange","The Doors","lyrics/peoplearestrange.txt","audio/peoplearestrange.mp3");

        Song s44("Pocketful of Sunshine","Natasha Bedingfield","lyrics/pocketfulofsunshine.txt","audio/pocketfulofsunshine.mp3");

        Song s45("Psycho","System of a Down","lyrics/psycho.txt","audio/psycho.mp3");

        Song s46("Roundabout","Yes","lyrics/roundabout.txt","audio/roundabout.mp3");

        Song s47("Runaway","Aurora","lyrics/runaway.txt","audio/runaway.mp3");

        Song s48("Shake It Out","Florence + The Machine","lyrics/shakeitout.txt","audio/shakeitout.mp3");

        Song s49("Space Oddity","David Bowie","lyrics/spaceoddity.txt","audio/spaceoddity.mp3");

        Song s50("Sugar","System of a Down","lyrics/sugar.txt","audio/sugar.mp3");

        Song s51("The Pretender","Foo Fighters","lyrics/thepretender.txt","audio/thepretender.mp3");

        Song s52("The Scientist","Coldplay","lyrics/thescientist.txt","audio/thescientist.mp3");

        Song s53("The Sound of Silence","Simon & Garfunkel","lyrics/thesoundofsilence.txt","audio/thesoundofsilence.mp3");

        Song s54("Three Little Birds","Bob Marley","lyrics/threelittlebirds.txt","audio/threelittlebirds.mp3");
        
        Song s55("Time","Pink Floyd","lyrics/time.txt","audio/time.mp3");

        Song s56("Unintended","Muse","lyrics/unintended.txt","audio/unintended.mp3");

        Song s57("Wake Me Up When September Ends","Green Day","lyrics/wakemeupwhenseptemberends.txt","audio/wakemeupwhenseptemberends.mp3");

        Song s58("Walking on Sunshine","Katrina and the Waves","lyrics/walkingonsunshine.txt","audio/walkingonsunshine.mp3");

        Song s59("Wish You Were Here","Pink Floyd","lyrics/whishyouwerehere.txt","audio/whishyouwerehere.mp3");

        Song s60("You're Gonna Go Far, Kid","The Offspring","lyrics/youregonnagofarkid.txt","audio/youregonnagofarkid.mp3");
    
        playlist.addSong(s1);
        playlist.addSong(s2);
        playlist.addSong(s3);
        playlist.addSong(s4);
        playlist.addSong(s5);
        playlist.addSong(s6);

        User users[5] = {
                User("Abigail Brooks", "1234"),
                User("Grant Best", "2345"),
                User("Leeroy Mateo", "9876"),
                User("Riley Verselis", "3456"),
                User("Zoey Raghavan", "7890")
        };
        User* currentUser = login(users, 5);
        if(currentUser == nullptr){
                return 0;
        }
        int option;
        ui::clear();
        ui::separator();
        std::cout << "¡Bienvenid@ " << currentUser -> getUsername() << "!";
        ui::separator();
        while(1){
                ui::title("OPCIONES");
                std::cout << "1. Mostrar canciones\n";
                std::cout << "2. Buscar cancion\n";
                std::cout << "3. Buscar artista\n";
                std::cout << "4. Reproducir cancion\n";
                std::cout << "5. Reproduccion aleatoria\n";
                std::cout << "6. Reproducir todas\n";
                std::cout << "7. Me gusta\n";
                std::cout << "8. " << currentUser -> getUsername() << " MIX\n";
                std::cout << "9. Eliminar cancion\n";
                std::cout << "0. Salir\n";
                std::cout << "Seleccione una opcion: ";
                std::cin >> option;

                switch(option){
                        case 0:
                                ui::clear();
                                ui::separator();
                                std::cout << "\tHasta Luego !";
                                ui::separator();
                                return 0;
                        break;

                        case 1:
                                ui::clear();
                                ui::title("LISTA DE CANCIONES: ");
                                playlist.printSongs();
                                std::cout << "\n";
                                std::cin.ignore(1000, '\n');
                                ui::pause();
                                ui::clear();
                        break;

                        case 2:
                        break;

                        case 3:
                        break;

                        case 4:
                        break;

                        case 5:
                        break;

                        case 6:
                        break;

                        case 7:
                        break;

                        case 8:
                        break;

                        case 9:
                        break;
                }
        };
        return 0;
}