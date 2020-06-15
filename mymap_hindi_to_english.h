#include<bits/stdc++.h>
using namespace std;
extern unordered_map<string,vector<string> > mymap;


    vector<string> v1={"a"};


    vector<string> v2={"aa"};


    vector<string> v3={"i"};


    vector<string> v4={"ii","ee"};


    vector<string> v5={"u"};



    vector<string> v6={"uu","oo"};





    vector<string> v9={"ri"};



    //ऌ this letters has not been mapped

    //ऍ
    //ऎ


    vector<string> v10={"e"};



    vector<string> v11={"ei","ai"};



    //ऑ
    //ऒ

    vector<string> v13={"o"};



    vector<string> v14={"au","ow","ou"};






    vector<string> v17={"n","m"};






    vector<string> v19={"ah"};


    vector<string> v20={"k","q","c"};





    vector<string> v22={"kh","qh"};






    vector<string> v24={"g"};



    vector<string> v25={"gh"};


    vector<string> v26={"ng"};



    vector<string> v27={"ch"};


    vector<string> v28={"j"};



    vector<string> v29={"jh"};


    vector<string> v30={"ny"};



    vector<string> v31={"t"};


    vector<string> v32={"th"};


    vector<string> v33={"d"};



    vector<string> v34={"dh"};



    vector<string> v35={"n"};


    //ऩंा


    vector<string> v36={"p"};



    vector<string> v37={"ph","f"};






    vector<string> v39={"b"};



    vector<string> v40={"bh","v"};



    vector<string> v41={"m"};



    vector<string> v42={"y"};



    vector<string> v43={"r"};


    //ऱ


    vector<string> v44={"l"};



    vector<string> v45={"v","w"};




    //ळ
    //ऴ


    vector<string> v47={"s"};



    vector<string> v48={"s","sh"};



    vector<string> v49={"h"};






    vector<string> v52={"z"};
	vector<string> v53={"qa"};
	vector<string> v54={"khha"};
	vector<string> v55={"ghha"};
	vector<string> v56={"dddha"};
	vector<string> v57={"rha"};
	vector<string> v58={"fa"};
	vector<string> v59={"yya"};
    //्
    //"स्टा"
    //र्स
typedef pair<string, vector<string> > sp;
const sp map_s[] = {
    sp("अ", v1),
sp("ा", v1),
  sp("आ",v2),
  sp("इ",v3),
sp("ई",v3),
sp("ि",v3),
sp("ी",v3),
  sp("ई",v4),
sp("ी",v4),
  sp("उ",v5),
sp("ु",v5),
  sp("ऊ",v6),
sp("ू",v6),
  sp("ऋ",v9),
sp("ृ",v9),
  sp("ए",v10),
sp("े",v10),
  sp("ऐ",v11),
sp("ै",v11),
  sp("ओ",v13),
sp("ो",v13),
  sp("औ",v14),
sp("ौ",v14),
sp("ं",v17),
sp("ँ",v17),

  sp("ः",v19),
  sp("क",v20),
  sp("ख",v22),
  sp("ग",v24),
  sp("घ",v25),
  sp("ङ",v26),
  sp("च",v27),
sp("छ",v27),
  sp("ज",v28),
  sp("झ",v29),
  sp("ञ",v30),
  sp("त",v31),
sp("ट",v31),
  sp("ठ",v32),
sp("थ",v32),
  sp("ड",v33),
sp("द",v33),
  sp("ढ",v34),
sp("ध",v34),
  sp("न",v35),
sp("ण",v35),
  sp("प",v36),
  sp("फ",v37),
  sp("ब",v39),
  sp("भ",v40),
  sp("म",v41),
  sp("य",v42),
  sp("र",v43),
  sp("ल",v44),
  sp("व",v45),
  sp("श",v48),
sp("ष",v48),
sp("स",v47),
  sp("ह",v49),
  sp("ज़",v52),
  sp("क़",v53),
  sp("ख़",v54),
  sp("ग़",v55),
  sp("ड़",v56),
  sp("ढ़",v57),
  sp("फ़",v58),
  sp("य़",v59)


};
const int map_si = sizeof(map_s) / sizeof(map_s[0]);
unordered_map<string,vector<string> > mymap (map_s, map_s + map_si);

