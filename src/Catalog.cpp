#include "Catalog.h"
#include "Playlist.h"

Song catalog[60];

void loadCatalog(){
    catalog[0] = Song("Across the Universe","The Beatles","lyrics/acrosstheuniverse.txt","audio/acrosstheuniverse.mp3");

    catalog[1] = Song("All I Wanted","Paramore","lyrics/alliwanted.txt","audio/alliwanted.mp3");
    
    catalog[2] = Song("Bad Habit","The Offspring","lyrics/theoffspring.txt","audio/theoffspring.mp3");

    catalog[3] = Song("Basket Case","Green Day","lyrics/basketcase.txt","audio/basketcase.mp3");

    catalog[4] = Song ("Black Sheep","Metric","lyrics/blacksheep.txt","audio/blakcsheep.mp3");

    catalog[5] = Song("Boulevrd of Broken Dreams","Green Day","lyrics/boulevardofbrokendreams.txt","audio/boulevardofbrokendreams.mp3");
    
    catalog[6] = Song("Breathe (2AM)","Anna Nalick","lyrics/breathe.txt","audio/breathe.mp3");

    catalog[7] = Song("Breathe Me","Sia","lyrics/breatheme.txt","audio/bretheme.mp3");

    catalog[8] = Song("Brave","Sara Bareilles","lyrics/brave.txt","audio/brave.mp3");

    catalog[9] = Song("Bury Me Face Down","grandson","lyrics/burymefacedown.txt","audio/burymefacedown.mp3");

    catalog[10] = Song("Cancer","My Chemical Romance","lyrics/cancer.txt","audio/cancer.mp3");
        
    catalog[11] = Song("Carry On","Fun.","lyrics/carryon.txt","audio/carryon.mp3");
        
    catalog[12] = Song("Comfortably Numb","Pink Floyd","lyrics/comfortablynumb.txt","audio/confortablynumb.mp3");

    catalog[13] = Song("Control","Halsey","lyrics/control.txt","audio/control.mp3");

    catalog[14] = Song("Creep","Radiohead","lyrics/creep.txt","audio/creep.mp3");

    catalog[15] = Song("Dog Days Are Over","Florence + The Machine","lyrics/dogdaysareover.txt","audio/dogdaysareover.mp3");

    catalog[16] = Song("Dream On","Aerosmith","lyrics/dreamon.txt","audio/dreamon.mp3");

    catalog[17] = Song("Dreams","Fleetwood Mac","lyrics/dreams.txt","audio/dreams.mp3");

    catalog[18] = Song("Dust in the Wind","Kansas","lyrics/dustinthewind.txt","audio/dustinthewind.mp3");

    catalog[19] = Song("Everybody Wants to Rule the World","Tears for Fears","lyrics/everybodywantstoruletheworld.txt","audio/everybodywantstoruletheworld.mp3");

    catalog[20] = Song("Everything in Its Right Place","Radiohead","lyrics/everythinginitsrightplace.txt","audio/everythinginitsrightplace.mp3");
        
    catalog[21] = Song("Feel Good Inc.","Gorillaz","lyrics/feelgoodinc.txt","audio/feelgoodinc.mp3");

    catalog[22] = Song("Fix You","Coldplay","lyrics/fixyou.txt","audio/fixyou.mp3");

    catalog[23] = Song("Freaks","Surf Curse","lyrics/freaks.txt","audio/freaks.mp3");

    catalog[24] = Song("Good Riddance (Time of Your Life)","Green Day","lyrics/goodriddance.txt","audio/goodriddance.mp3");

    catalog[25] = Song("Home","Phillip Phillips","lyrics/home.txt","audio/home.mp3");

    catalog[26] = Song("How to Disappear Completely","Radiohead","lyrics/howtodisappearcompletely.txt","audio/howtodisappearcompletely.mp3");

    catalog[27] = Song("Iris","Goo Goo Dolls","lyrics/iris.txt","audio/iris.mp3");

    catalog[28] = Song("Killing in the Name","Rage Against the Machine","lyrics/killinginthename.txt","audio/killinginthename.mp3");

    catalog[29] = Song("Liability","Lorde","lyrics/liability.txt","audio/liability.mp3");

    catalog[30] = Song("Little Dark Age","MGMT","lyrics/littledarkagge.txt","audio/littledarkage.mp3");

    catalog[31] = Song("Lost Kitten","Metric","lyrics/lostkitten.txt","audio/lostkitten.mp3");

    catalog[32] = Song("Mad World","Tears for Fears","lyrics/madworld.txt","audio/madworld.mp3");

    catalog[33] = Song("Misery Business","Paramore","lyrics/miserybusiness.txt","audio/miserybusiness.mp3");

    catalog[34] = Song("Monster","Skillet","lyrics/monster.txt","audio/monster.mp3");

    catalog[35] = Song("My Inmortal","Evanescence","lyrics/myinmortal.txt","audio/myinmortal.mp3");

    catalog[36] = Song("My Ordinary Life","The Living Tombstone","lyrics/myordinarylife.txt","audio/myordinarylife.mp3");

    catalog[37] = Song("No One Knows","Queens of the Stone Age","lyrics/nooneknows.txt","audio/nooneknows.mp3");

    catalog[38] = Song("Nobody","Mitski","lyrics/nobody.txt","audio/nobody.mp3");

    catalog[39] = Song("Numb","Linkin Park","lyrics/numb.txt","audio/numb.mp3");

    catalog[40] = Song("Paint It Black","The Rolling Stones","lyrics/paintitblack.txt","audio/paintitblack.mp3");

    catalog[41] = Song("Paranoid Android","Radiohead","lyrics/paranoidandroid.txt","audio/paranoidandroid.mp3");

    catalog[42] = Song("People Are Strange","The Doors","lyrics/peoplearestrange.txt","audio/peoplearestrange.mp3");

    catalog[43] = Song("Pocketful of Sunshine","Natasha Bedingfield","lyrics/pocketfulofsunshine.txt","audio/pocketfulofsunshine.mp3");

    catalog[44] = Song("Psycho","System of a Down","lyrics/psycho.txt","audio/psycho.mp3");

    catalog[45] = Song("Roundabout","Yes","lyrics/roundabout.txt","audio/roundabout.mp3");

    catalog[46] = Song("Runaway","Aurora","lyrics/runaway.txt","audio/runaway.mp3");

    catalog[47] = Song("Shake It Out","Florence + The Machine","lyrics/shakeitout.txt","audio/shakeitout.mp3");

    catalog[48] = Song("Space Oddity","David Bowie","lyrics/spaceoddity.txt","audio/spaceoddity.mp3");

    catalog[49] = Song("Sugar","System of a Down","lyrics/sugar.txt","audio/sugar.mp3");

    catalog[50] = Song("The Pretender","Foo Fighters","lyrics/thepretender.txt","audio/thepretender.mp3");

    catalog[51] = Song("The Scientist","Coldplay","lyrics/thescientist.txt","audio/thescientist.mp3");

    catalog[52] = Song("The Sound of Silence","Simon & Garfunkel","lyrics/thesoundofsilence.txt","audio/thesoundofsilence.mp3");

    catalog[53] = Song("Three Little Birds","Bob Marley","lyrics/threelittlebirds.txt","audio/threelittlebirds.mp3");

    catalog[54] = Song("Time","Pink Floyd","lyrics/time.txt","audio/time.mp3");

    catalog[55] = Song("Unintended","Muse","lyrics/unintended.txt","audio/unintended.mp3");

    catalog[56] = Song("Wake Me Up When September Ends","Green Day","lyrics/wakemeupwhenseptemberends.txt","audio/wakemeupwhenseptemberends.mp3");

    catalog[57] = Song("Walking on Sunshine","Katrina and the Waves","lyrics/walkingonsunshine.txt","audio/walkingonsunshine.mp3");

    catalog[58] = Song("Wish You Were Here","Pink Floyd","lyrics/whishyouwerehere.txt","audio/whishyouwerehere.mp3");

    catalog[59] = Song("You're Gonna Go Far, Kid","The Offspring","lyrics/youregonnagofarkid.txt","audio/youregonnagofarkid.mp3");
}