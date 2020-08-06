// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::UECS::EntityFilter>
    : Ubpa::USRefl::TypeInfoBase<Ubpa::UECS::EntityFilter>
{
    static constexpr AttrList attrs = {};

    static constexpr FieldList fields = {
        Field{Name::constructor, WrapConstructor<Ubpa::UECS::EntityFilter()>()},
        Field{Name::constructor, WrapConstructor<Ubpa::UECS::EntityFilter(std::set<Ubpa::UECS::CmptType>, std::set<Ubpa::UECS::CmptType>, std::set<Ubpa::UECS::CmptType>)>(),
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "allCmptTypes"},
                    }
                },
                Attr{UBPA_USREFL_NAME_ARG(1),
                    AttrList{
                        Attr{Name::name, "anyCmptTypes"}
                    }
                },
                Attr{UBPA_USREFL_NAME_ARG(2),
                    AttrList{
                        Attr{Name::name, "noneCmptTypes"}
                    }
                },
            }
        },
        Field{"HashCode", &Ubpa::UECS::EntityFilter::HashCode},
        Field{"AllCmptTypes", &Ubpa::UECS::EntityFilter::AllCmptTypes},
        Field{"AnyCmptTypes", &Ubpa::UECS::EntityFilter::AnyCmptTypes},
        Field{"NoneCmptTypes", &Ubpa::UECS::EntityFilter::NoneCmptTypes},
        Field{"InsertAll",
            static_cast<void(Ubpa::UECS::EntityFilter::*)(const Ubpa::UECS::CmptType*, size_t)>(&Ubpa::UECS::EntityFilter::InsertAll),
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "types"},
                    }
                },
                Attr{UBPA_USREFL_NAME_ARG(1),
                    AttrList{
                        Attr{Name::name, "num"},
                    }
                },
            }
        },
		Field{"InsertAny",
			static_cast<void(Ubpa::UECS::EntityFilter::*)(const Ubpa::UECS::CmptType*, size_t)>(&Ubpa::UECS::EntityFilter::InsertAny),
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "types"},
                    }
                },
                Attr{UBPA_USREFL_NAME_ARG(1),
                    AttrList{
                        Attr{Name::name, "num"},
                    }
                },
            }
        },
		Field{"InsertNone",
			static_cast<void(Ubpa::UECS::EntityFilter::*)(const Ubpa::UECS::CmptType*, size_t)>(&Ubpa::UECS::EntityFilter::InsertNone),
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "types"},
                    }
                },
                Attr{UBPA_USREFL_NAME_ARG(1),
                    AttrList{
                        Attr{Name::name, "num"},
                    }
                },
            }
        },
		Field{"EraseAll",
			static_cast<void(Ubpa::UECS::EntityFilter::*)(const Ubpa::UECS::CmptType*, size_t)>(&Ubpa::UECS::EntityFilter::EraseAll),
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "types"},
                    }
                },
                Attr{UBPA_USREFL_NAME_ARG(1),
                    AttrList{
                        Attr{Name::name, "num"},
                    }
                },
            }
        },
		Field{"EraseAny",
			static_cast<void(Ubpa::UECS::EntityFilter::*)(const Ubpa::UECS::CmptType*, size_t)>(&Ubpa::UECS::EntityFilter::EraseAny),
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "types"},
                    }
                },
                Attr{UBPA_USREFL_NAME_ARG(1),
                    AttrList{
                        Attr{Name::name, "num"},
                    }
                },
            }
        },
		Field{"EraseNone",
			static_cast<void(Ubpa::UECS::EntityFilter::*)(const Ubpa::UECS::CmptType*, size_t)>(&Ubpa::UECS::EntityFilter::EraseNone),
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "types"},
                    }
                },
                Attr{UBPA_USREFL_NAME_ARG(1),
                    AttrList{
                        Attr{Name::name, "num"},
                    }
                },
            }
        },
        Field{"operator==", &Ubpa::UECS::EntityFilter::operator==,
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "filter"},
                    }
                },
            }
        },
    };
};
