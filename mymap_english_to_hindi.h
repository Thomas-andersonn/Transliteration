#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
extern unordered_map<string,vector<string> > mymap;

    vector<string> v1={"","अ","ा"};

    vector<string> v2={"आ"};


    vector<string> v3={"इ","ई","ि","ी"};


    vector<string> v4={"ई","ी"};

    vector<string> v5={"ई","ी"};



    vector<string> v6={"उ","ु"};

    vector<string> v7={"ऊ","ू"};

    vector<string> v8={"ऊ","ू"};



    vector<string> v9={"ऋ","ृ"};



    //ऌ this letters has not been mapped

    //ऍ
    //ऎ

    vector<string> v10={"ए","े"};


    vector<string> v11={"ऐ","ै"};

    vector<string> v12={"ऐ","ै"};

    //ऑ
    //ऒ
    vector<string> v13={"ओ","ो"};


    vector<string> v14={"औ","ौ"};

    vector<string> v15={"औ","ौ"};

    vector<string> v16={"औ","ौ"};


    vector<string> v17={"ं","ँ"};


    vector<string> v18={"ं","ँ"};


    vector<string> v19={"ः"};


    vector<string> v20={"क"};

    vector<string> v21={"क"};


    vector<string> v22={"ख"};

    vector<string> v23={"ख"};


    vector<string> v24={"ग"};


    vector<string> v25={"घ"};


    vector<string> v26={"ङ"};


    vector<string> v27={"च","छ"};


    vector<string> v28={"ज"};


    vector<string> v29={"झ"};


    vector<string> v30={"ञ"};


    vector<string> v31={"त","ट"};


    vector<string> v32={"ठ","थ"};


    vector<string> v33={"ड","द"};


    vector<string> v34={"ढ","ध"};


    vector<string> v35={"न","ण"};


    //ऩंा

    vector<string> v36={"प"};


    vector<string> v37={"फ"};

    vector<string> v38={"फ"};


    vector<string> v39={"ब"};


    vector<string> v40={"भ"};


    vector<string> v41={"म"};


    vector<string> v42={"य"};


    vector<string> v43={"र"};


    //ऱ

    vector<string> v44={"ल"};


    vector<string> v45={"व","भ"};

    vector<string> v46={"व"};


    //ळ
    //ऴ

    vector<string> v47={"श","ष","स"};


    vector<string> v48={"श","ष","स"};


    vector<string> v49={"ह"};

    vector<string> v50={"क"};

    vector<string> v51={"क्स"};

    vector<string> v52={"ज़"};
    //्
    //"स्टा"
    //र्स
typedef pair<string, vector<string> > sp;
const sp map_s[] = {
  sp("a", v1),
  sp("aa",v2),
  sp("i",v3),
  sp("ii",v4),
  sp("ee",v5),
  sp("u",v6),
  sp("uu",v7),
  sp("oo",v8),
  sp("ri",v9),
  sp("e",v10),
  sp("ai",v11),
  sp("ei",v12),
  sp("o",v13),
  sp("au",v14),
  sp("ou",v15),
  sp("ow",v16),
  sp("an",v17),
  sp("am",v18),
  sp("ah",v19),
  sp("k",v20),
  sp("q",v21),
  sp("kh",v22),
  sp("qh",v23),
  sp("g",v24),
  sp("gh",v25),
  sp("ng",v26),
  sp("ch",v27),
  sp("j",v28),
  sp("jh",v29),
  sp("ny",v30),
  sp("t",v31),
  sp("th",v32),
  sp("d",v33),
  sp("dh",v34),
  sp("n",v35),
  sp("p",v36),
  sp("ph",v37),
  sp("f",v38),
  sp("b",v39),
  sp("bh",v40),
  sp("m",v41),
  sp("y",v42),
  sp("r",v43),
  sp("l",v44),
  sp("v",v45),
  sp("w",v46),
  sp("s",v47),
  sp("sh",v48),
  sp("h",v49),
  sp("c",v50),
  sp("x",v51),
  sp("z",v52)


};
const int map_si = sizeof(map_s) / sizeof(map_s[0]);
unordered_map<string,vector<string> > mymap (map_s, map_s + map_si);
