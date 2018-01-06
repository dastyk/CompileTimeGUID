#ifndef _UTILZ_COMPILE_TIME_STRING_H_
#define _UTILZ_COMPILE_TIME_STRING_H_
#include <stdint.h>
#include <cstddef>

	namespace Utilz
	{


		static constexpr uint32_t s_PrimeTable[] = {
			257u, 263u, 269u, 271u, 277u, 281u, 283u, 293u,
			307u, 311u, 313u, 317u, 331u, 337u, 347u, 349u, 353u,
			359u, 367u, 373u, 379u, 383u, 389u, 397u, 401u, 409u,
			419u, 421u, 431u, 433u, 439u, 443u, 449u, 457u, 461u,
			463u, 467u, 479u, 487u, 491u, 499u, 503u, 509u, 521u,
			523u, 541u, 547u, 557u, 563u, 569u, 571u, 577u, 587u,
			593u, 599u, 601u, 607u, 613u, 617u, 619u, 631u, 641u,
			643u, 647u, 653u, 659u, 661u, 673u, 677u, 683u, 691u,
			701u, 709u, 719u, 727u, 733u, 739u, 743u, 751u, 757u,
			761u, 769u, 773u, 787u, 797u, 809u, 811u, 821u, 823u,
			827u, 829u, 839u, 853u, 857u, 859u, 863u, 877u, 881u,
			883u, 887u, 907u, 911u, 919u, 929u, 937u, 941u, 947u,
			953u, 967u, 971u, 977u, 983u, 991u, 997u, 1009u, 1013u,
			1019u, 1021u, 1031u, 1033u, 1039u, 1049u, 1051u, 1061u, 1063u,
			1069u, 1087u, 1091u, 1093u, 1097u, 1103u, 1109u, 1117u, 1123u,
			1129u, 1151u, 1153u, 1163u, 1171u, 1181u, 1187u, 1193u, 1201u,
			1213u, 1217u, 1223u, 1229u, 1231u, 1237u, 1249u, 1259u, 1277u,
			1279u, 1283u, 1289u, 1291u, 1297u, 1301u, 1303u, 1307u, 1319u,
			1321u, 1327u, 1361u, 1367u, 1373u, 1381u, 1399u, 1409u, 1423u,
			1427u, 1429u, 1433u, 1439u, 1447u, 1451u, 1453u, 1459u, 1471u,
			1481u, 1483u, 1487u, 1489u, 1493u, 1499u, 1511u, 1523u, 1531u,
			1543u, 1549u, 1553u, 1559u, 1567u, 1571u, 1579u, 1583u, 1597u,
			1601u, 1607u, 1609u, 1613u, 1619u, 1621u, 1627u, 1637u, 1657u,
			1663u, 1667u, 1669u, 1693u, 1697u, 1699u, 1709u, 1721u, 1723u,
			1733u, 1741u, 1747u, 1753u, 1759u, 1777u, 1783u, 1787u, 1789u,
			1801u, 1811u, 1823u, 1831u, 1847u, 1861u, 1867u, 1871u, 1873u,
			1877u, 1879u, 1889u, 1901u, 1907u, 1913u, 1931u, 1933u, 1949u,
			1951u, 1973u, 1979u, 1987u, 1993u, 1997u, 1999u, 2003u, 2011u,
			2017u, 2027u, 2029u, 2039u, 2053u, 2063u, 2069u, 2081u, 2083u,
			2087u, 2089u, 2099u, 2111u, 2113u, 2129u, 2131u, 2137u, 2141u,
			2143u, 2153u, 2161u, 2179u, 2203u, 2207u, 2213u, 2221u, 2237u,
			2239u, 2243u, 2251u, 2267u, 2269u, 2273u, 2281u, 2287u, 2293u,
			2297u, 2309u, 2311u, 2333u, 2339u, 2341u, 2347u, 2351u, 2357u,
			2371u, 2377u, 2381u, 2383u, 2389u, 2393u, 2399u, 2411u, 2417u,
			2423u, 2437u, 2441u, 2447u, 2459u, 2467u, 2473u, 2477u, 2503u,
			2521u, 2531u, 2539u, 2543u, 2549u, 2551u, 2557u, 2579u, 2591u,
			2593u, 2609u, 2617u, 2621u, 2633u, 2647u, 2657u, 2659u, 2663u,
			2671u, 2677u, 2683u, 2687u, 2689u, 2693u, 2699u, 2707u, 2711u,
			2713u, 2719u, 2729u, 2731u, 2741u, 2749u, 2753u, 2767u, 2777u,
			2789u, 2791u, 2797u, 2801u, 2803u, 2819u, 2833u, 2837u, 2843u,
			2851u, 2857u, 2861u, 2879u, 2887u, 2897u, 2903u, 2909u, 2917u,
			2927u, 2939u, 2953u, 2957u, 2963u, 2969u, 2971u, 2999u, 3001u,
			3011u, 3019u, 3023u, 3037u, 3041u, 3049u, 3061u, 3067u, 3079u,
			3083u, 3089u, 3109u, 3119u, 3121u, 3137u, 3163u, 3167u, 3169u,
			3181u, 3187u, 3191u, 3203u, 3209u, 3217u, 3221u, 3229u, 3251u,
			3253u, 3257u, 3259u, 3271u, 3299u, 3301u, 3307u, 3313u, 3319u,
			3323u, 3329u, 3331u, 3343u, 3347u, 3359u, 3361u, 3371u, 3373u,
			3389u, 3391u, 3407u, 3413u, 3433u, 3449u, 3457u, 3461u, 3463u,
			3467u, 3469u, 3491u, 3499u, 3511u, 3517u, 3527u, 3529u, 3533u,
			3539u, 3541u, 3547u, 3557u, 3559u, 3571u, 3581u, 3583u, 3593u,
			3607u, 3613u, 3617u, 3623u, 3631u, 3637u, 3643u, 3659u, 3671u,
			3673u, 3677u, 3691u, 3697u, 3701u, 3709u, 3719u, 3727u, 3733u,
			3739u, 3761u, 3767u, 3769u, 3779u, 3793u, 3797u, 3803u, 3821u,
			3823u, 3833u, 3847u, 3851u, 3853u, 3863u, 3877u, 3881u, 3889u,
			3907u, 3911u, 3917u, 3919u, 3923u, 3929u, 3931u, 3943u, 3947u,
			3967u, 3989u, 4001u, 4003u, 4007u, 4013u, 4019u, 4021u, 4027u,
			4049u, 4051u, 4057u, 4073u, 4079u, 4091u, 4093u, 4099u, 4111u,
			4127u, 4129u, 4133u, 4139u, 4153u, 4157u, 4159u, 4177u, 4201u,
			4211u, 4217u, 4219u, 4229u, 4231u, 4241u, 4243u, 4253u, 4259u,
			4261u, 4271u, 4273u, 4283u, 4289u, 4297u, 4327u, 4337u, 4339u,
			4349u, 4357u, 4363u, 4373u, 4391u, 4397u, 4409u, 4421u, 4423u,
			4441u, 4447u, 4451u, 4457u, 4463u, 4481u, 4483u, 4493u, 4507u,
			4513u, 4517u, 4519u, 4523u, 4547u, 4549u, 4561u, 4567u, 4583u,
			4591u, 4597u, 4603u, 4621u, 4637u, 4639u, 4643u, 4649u, 4651u,
			4657u, 4663u, 4673u, 4679u, 4691u, 4703u, 4721u, 4723u, 4729u,
			4733u, 4751u, 4759u, 4783u, 4787u, 4789u, 4793u, 4799u, 4801u,
			4813u, 4817u, 4831u, 4861u, 4871u, 4877u, 4889u, 4903u, 4909u,
			4919u, 4931u, 4933u, 4937u, 4943u, 4951u, 4957u, 4967u, 4969u,
			4973u, 4987u, 4993u, 4999u, 5003u, 5009u, 5011u, 5021u, 5023u,
			5039u, 5051u, 5059u, 5077u, 5081u, 5087u, 5099u, 5101u, 5107u,
			5113u, 5119u, 5147u, 5153u, 5167u, 5171u, 5179u, 5189u, 5197u,
			5209u, 5227u, 5231u, 5233u, 5237u, 5261u, 5273u, 5279u, 5281u
		};

		using HashValue = uint32_t;
		static constexpr uint32_t s_PrimeNumCount = sizeof(s_PrimeTable) / sizeof(s_PrimeTable[0]);
#define NULL_HASH 0

		namespace StringHash
		{

			class ConstexprString
			{
				const char* p;
				std::size_t sz;
			public:
				template<std::size_t N>
				constexpr ConstexprString(const char(&a)[N]) : p(a), sz(N - 1) {  };
				constexpr char operator[](std::size_t n) const { return (n >= sz) ? '\0' : p[n]; };
				constexpr std::size_t size()const { return sz; };
				constexpr operator const char*()const { return p; };
			};


			constexpr HashValue GetHash_ConstexprString(const char* toHash, uint32_t size)
			{
				HashValue hash = NULL_HASH;

				for (uint32_t i = 0; i < size; i++)
				{
					hash += static_cast<uint32_t>(toHash[i]);
					hash += hash << 10;
					hash += hash >> 6;
					hash ^= hash * (s_PrimeTable[(static_cast<uint32_t>(toHash[i]) << 5) % s_PrimeNumCount]);
				}
				return hash;
			}

			constexpr HashValue GetHash_ConstexprString(const ConstexprString& toHash)
			{
				return GetHash_ConstexprString(toHash, static_cast<uint32_t>(toHash.size()));
			}
		}


		class ConstexprStringAndHash
		{
			StringHash::ConstexprString string;
			HashValue hash;
		public:
			struct Hasher
			{
				inline HashValue operator()(const ConstexprStringAndHash& g) const
				{
					return g.hash;
				}
			};
			HashValue ID()const { return hash; }
			template<std::size_t N>
			constexpr ConstexprStringAndHash(const char(&a)[N]) : string(a) { hash = StringHash::GetHash_ConstexprString(string); };
			operator const char*()const { return string; };
			const char* c_str() const { return string; };

		};
	}
	constexpr Utilz::HashValue operator "" _hash(const char* toHash, std::size_t size)
	{
		return Utilz::StringHash::GetHash_ConstexprString(toHash, static_cast<uint32_t>(size));
	}


#endif //_UTILZ_COMPILE_TIME_STRING_H_