#pragma once

#include <memory>
//#include <ostream>
#include <string>
#include <vector>
#include "state.h"

#ifdef RDM_NESTROTATION_EXPORTS
#define RDM_NESTROTATION_API __declspec(dllexport)
//#define RDM_NESTROTATION_TEMPLATE
#else
#define RDM_NESTROTATION_API __declspec(dllimport)
//#define RDM_NESTROTATION_TEMPLATE extern
#endif

class RDM_NESTROTATION_API Move_t {
public:
    Move_t();
    Move_t(const Move_t & m);
    Move_t& Move_t::operator=(const Move_t& m);
    virtual ~Move_t() = 0;

    friend void swap(Move_t& ms1, Move_t& ms2);

    enum Type_t { SPELL_TYPE, ABILITY_TYPE, WEAPONSKILL_TYPE, FINISHER_TYPE };

    const std::string& getName() const;
    const std::string& getChar() const;
    Type_t getType() const;
    bool IsMagicalDamage() const;
    int getCast() const;
    int getRecast() const;
    int getWhite() const;
    int getBlack() const;
    //int getPotency() const;
    //int getComboPotency() const;
    int getAnimationLock() const;
    
    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
    virtual int CalculatePotency(const State_t& state) const;

protected:
    struct Impl;
    Impl* pimpl;
};

class RDM_NESTROTATION_API Jolt2_t : public Move_t {
public:
    Jolt2_t();
    virtual ~Jolt2_t() { }

    virtual void Execute(State_t& state) const;
};

class RDM_NESTROTATION_API Impact_t : public Move_t {
public:
    Impact_t();
    virtual ~Impact_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
};

class RDM_NESTROTATION_API Verthunder_t : public Move_t {
public:
    Verthunder_t();
    virtual ~Verthunder_t() { }

    virtual void Execute(State_t& state) const;
};

class RDM_NESTROTATION_API Veraero_t : public Move_t {
public:
    Veraero_t();
    virtual ~Veraero_t() { }

    virtual void Execute(State_t& state) const;
};

class RDM_NESTROTATION_API Verfire_t : public Move_t {
public:
    Verfire_t();
    virtual ~Verfire_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
};

class RDM_NESTROTATION_API Verstone_t : public Move_t {
public:
    Verstone_t();
    virtual ~Verstone_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
};

class RDM_NESTROTATION_API Verflare_t : public Move_t {
public:
    Verflare_t();
    virtual ~Verflare_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
    virtual int CalculatePotency(const State_t& state) const;
};

class RDM_NESTROTATION_API Verholy_t : public Move_t {
public:
    Verholy_t();
    virtual ~Verholy_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
    virtual int CalculatePotency(const State_t& state) const;
};

class RDM_NESTROTATION_API Corps_t : public Move_t {
public:
    Corps_t();
    virtual ~Corps_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
};

class RDM_NESTROTATION_API Displacement_t : public Move_t {
public:
    Displacement_t();
    virtual ~Displacement_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
};

class RDM_NESTROTATION_API Acceleration_t : public Move_t {
public:
    Acceleration_t();
    virtual ~Acceleration_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
};

class RDM_NESTROTATION_API Manification_t : public Move_t {
public:
    Manification_t();
    virtual ~Manification_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
};

class RDM_NESTROTATION_API Embolden_t : public Move_t {
public:
    Embolden_t();
    virtual ~Embolden_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
};

class RDM_NESTROTATION_API Swiftcast_t : public Move_t {
public:
    Swiftcast_t();
    virtual ~Swiftcast_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
};

class RDM_NESTROTATION_API Fleche_t : public Move_t {
public:
    Fleche_t();
    virtual ~Fleche_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
};

class RDM_NESTROTATION_API Contre_t : public Move_t {
public:
    Contre_t();
    virtual ~Contre_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
    virtual int CalculatePotency(const State_t& state) const;
};

class RDM_NESTROTATION_API Riposte_t : public Move_t {
public:
    Riposte_t();
    virtual ~Riposte_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
};

class RDM_NESTROTATION_API EnhRiposte_t : public Move_t {
public:
    EnhRiposte_t();
    virtual ~EnhRiposte_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
};

class RDM_NESTROTATION_API Zwerchhau_t : public Move_t {
public:
    Zwerchhau_t();
    virtual ~Zwerchhau_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
    virtual int CalculatePotency(const State_t& state) const;
};

class RDM_NESTROTATION_API EnhZwerchhau_t : public Move_t {
public:
    EnhZwerchhau_t();
    virtual ~EnhZwerchhau_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
    virtual int CalculatePotency(const State_t& state) const;
};

class RDM_NESTROTATION_API Redoublement_t : public Move_t {
public:
    Redoublement_t();
    virtual ~Redoublement_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
    virtual int CalculatePotency(const State_t& state) const;
};

class RDM_NESTROTATION_API EnhRedoublement_t : public Move_t {
public:
    EnhRedoublement_t();
    virtual ~EnhRedoublement_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
    virtual int CalculatePotency(const State_t& state) const;
};

class RDM_NESTROTATION_API Scatter_t : public Move_t {
public:
    Scatter_t();
    virtual ~Scatter_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
    virtual int CalculatePotency(const State_t& state) const;
};

class RDM_NESTROTATION_API EnhScatter_t : public Move_t {
public:
    EnhScatter_t();
    virtual ~EnhScatter_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
    virtual int CalculatePotency(const State_t& state) const;
};

class RDM_NESTROTATION_API Moulinet_t : public Move_t {
public:
    Moulinet_t();
    virtual ~Moulinet_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
    virtual int CalculatePotency(const State_t& state) const;
};

class RDM_NESTROTATION_API EnhMoulinet_t : public Move_t {
public:
    EnhMoulinet_t();
    virtual ~EnhMoulinet_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
    virtual int CalculatePotency(const State_t& state) const;
};

class RDM_NESTROTATION_API Infusion_t : public Move_t {
public:
    Infusion_t();
    virtual ~Infusion_t() { }

    virtual void Execute(State_t& state) const;
    virtual bool IsUseable(const State_t& state) const;
};

class RDM_NESTROTATION_API EndPlaceholder_t : public Move_t {
public:
    EndPlaceholder_t();
    virtual ~EndPlaceholder_t() { }
};

class RDM_NESTROTATION_API DiversionPlaceholder_t : public Move_t {
public:
    DiversionPlaceholder_t();
    virtual ~DiversionPlaceholder_t() { }
};

class RDM_NESTROTATION_API MoveString_t {
public:
    typedef std::vector<std::shared_ptr<Move_t>> container_t;

    MoveString_t();
    MoveString_t(const MoveString_t& ms);
    MoveString_t& operator=(const MoveString_t& ms);
    ~MoveString_t();

    friend void swap(MoveString_t& ms1, MoveString_t& ms2);

    MoveString_t& addMove(std::shared_ptr<Move_t> move);

    container_t::const_iterator begin() const;
    container_t::const_iterator end() const;

private:
    struct Impl;
    Impl* pimpl;
};

class RDM_NESTROTATION_API MoveStates_t {
public:
    typedef std::vector<std::pair<std::shared_ptr<Move_t>, State_t>> container_t;

    MoveStates_t(State_t& state);
    MoveStates_t(const MoveStates_t& opener, int offset);
    MoveStates_t(const MoveStates_t& ms);
    MoveStates_t& operator=(const MoveStates_t& ms);
    ~MoveStates_t();

    friend void swap(MoveStates_t& ms1, MoveStates_t& ms2);

    MoveStates_t& advanceAndAddMove(std::shared_ptr<Move_t> move);
    MoveStates_t& advanceAndAddMoveString(const MoveString_t& movestring);
    MoveStates_t& advance(int ms);

    const State_t& constLastState() const;

    void finish(int total_ms = -1);
    bool isFinished() const;

    enum MS_PRINT_MODE_t {
        MS_PRINT_DPS,
        MS_PRINT_CHARLIST
    };

    void print(std::ostream& os, MS_PRINT_MODE_t printmode, char delim, int length=-1) const;

    container_t::iterator begin();
    container_t::iterator end();
    container_t::const_iterator begin() const;
    container_t::const_iterator end() const;

private:
    struct Impl;
    Impl* pimpl;
};

// accel, diversion, veraero. that's it.
RDM_NESTROTATION_API MoveStates_t getMinimalisticOpener();

// best raid opener as long as you don't have SAM & NIN
// manashifting the BRD variation
// doesn't take advantage of RNG procs
// http://ffxivrotations.com/10d9
RDM_NESTROTATION_API MoveStates_t getRaid5thGCDEmboldenOpener();