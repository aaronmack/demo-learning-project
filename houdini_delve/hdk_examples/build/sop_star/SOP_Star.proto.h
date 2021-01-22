/* Automagically Generated by generate_proto.py
 * Do not Edit
 */
#pragma once

#include <SOP/SOP_NodeVerb.h>
#include <SOP/SOP_GraphProxy.h>

#include <OP/OP_Utils.h>
#include <PRM/PRM_Parm.h>
#include <UT/UT_IStream.h>
#include <UT/UT_NTStreamUtil.h>
#include <UT/UT_Ramp.h>
#include <UT/UT_SharedPtr.h>
#include <UT/UT_StringHolder.h>
#include <UT/UT_StringStream.h>
#include <UT/UT_VectorTypes.h>
#include <SYS/SYS_Types.h>

using namespace UT::Literal;

class DEP_MicroNode;
namespace SOP_StarEnums
{
    enum class Orient
    {
        XY = 0,
        YZ,
        ZX
    };
}


class  SOP_StarParms  : public SOP_NodeParms
{
public:
    static int version() { return 1; }

    SOP_StarParms()
    {
        myDivs = 5;
        myRad = UT_Vector2D(1,0.3);
        myNradius = false;
        myT = UT_Vector3D(0,0,0);
        myOrient = 0;

    }

    explicit SOP_StarParms(const SOP_StarParms &) = default;

    ~SOP_StarParms() override {}

    bool operator==(const SOP_StarParms &src) const
    {
        if (myDivs != src.myDivs) return false;
        if (myRad != src.myRad) return false;
        if (myNradius != src.myNradius) return false;
        if (myT != src.myT) return false;
        if (myOrient != src.myOrient) return false;

        return true;
    }
    bool operator!=(const SOP_StarParms &src) const
    {
        return !operator==(src);
    }
    using Orient = SOP_StarEnums::Orient;



    void        buildFromOp(const SOP_GraphProxy *graph, exint nodeidx, fpreal time, DEP_MicroNode *depnode)
    {
        myDivs = 5;
        if (true)
            graph->evalOpParm(myDivs, nodeidx, "divs", time, 0);
        myRad = UT_Vector2D(1,0.3);
        if (true)
            graph->evalOpParm(myRad, nodeidx, "rad", time, 0);
        myNradius = false;
        if (true)
            graph->evalOpParm(myNradius, nodeidx, "nradius", time, 0);
        myT = UT_Vector3D(0,0,0);
        if (true)
            graph->evalOpParm(myT, nodeidx, "t", time, 0);
        myOrient = 0;
        if (true)
            graph->evalOpParm(myOrient, nodeidx, "orient", time, 0);

    }


    void loadFromOpSubclass(const LoadParms &loadparms) override
    {
        buildFromOp(loadparms.graph(), loadparms.nodeIdx(), loadparms.context().getTime(), loadparms.depnode());
    }


    void copyFrom(const SOP_NodeParms *src) override
    {
        *this = *((const SOP_StarParms *)src);
    }

    template <typename T>
    void
    doGetParmValue(TempIndex idx, TempIndex instance, T &value) const
    {
        if (idx.size() < 1)
            return;
        UT_ASSERT(idx.size() == instance.size()+1);
        if (idx.size() != instance.size()+1)
            return;
        switch (idx[0])
        {
            case 0:
                coerceValue(value, myDivs);
                break;
            case 1:
                coerceValue(value, myRad);
                break;
            case 2:
                coerceValue(value, myNradius);
                break;
            case 3:
                coerceValue(value, myT);
                break;
            case 4:
                coerceValue(value, myOrient);
                break;

        }
    }

    void getNestParmValue(TempIndex idx, TempIndex instance, exint &value) const override
    { doGetParmValue(idx, instance, value); }
    void getNestParmValue(TempIndex idx, TempIndex instance, fpreal &value) const override
    { doGetParmValue(idx, instance, value); }
    void getNestParmValue(TempIndex idx, TempIndex instance, UT_Vector2D &value) const override
    { doGetParmValue(idx, instance, value); }
    void getNestParmValue(TempIndex idx, TempIndex instance, UT_Vector3D &value) const override
    { doGetParmValue(idx, instance, value); }
    void getNestParmValue(TempIndex idx, TempIndex instance, UT_Vector4D &value) const override
    { doGetParmValue(idx, instance, value); }
    void getNestParmValue(TempIndex idx, TempIndex instance, UT_Matrix2D &value) const override
    { doGetParmValue(idx, instance, value); }
    void getNestParmValue(TempIndex idx, TempIndex instance, UT_Matrix3D &value) const override
    { doGetParmValue(idx, instance, value); }
    void getNestParmValue(TempIndex idx, TempIndex instance, UT_Matrix4D &value) const override
    { doGetParmValue(idx, instance, value); }
    void getNestParmValue(TempIndex idx, TempIndex instance, UT_StringHolder &value) const override
    { doGetParmValue(idx, instance, value); }
    void getNestParmValue(TempIndex idx, TempIndex instance, UT_SharedPtr<UT_Ramp> &value) const override
    { doGetParmValue(idx, instance, value); }
    void getNestParmValue(TempIndex idx, TempIndex instance, PRM_DataItemHandle &value) const override
    { doGetParmValue(idx, instance, value); }

    template <typename T>
    void
    doSetParmValue(TempIndex idx, TempIndex instance, const T &value) 
    {
        if (idx.size() < 1)
            return;
        UT_ASSERT(idx.size() == instance.size()+1);
        if (idx.size() != instance.size()+1)
            return;
        switch (idx[0])
        {
            case 0:
                coerceValue(myDivs, value);
                break;
            case 1:
                coerceValue(myRad, value);
                break;
            case 2:
                coerceValue(myNradius, value);
                break;
            case 3:
                coerceValue(myT, value);
                break;
            case 4:
                coerceValue(myOrient, value);
                break;

        }
    }

    void setNestParmValue(TempIndex idx, TempIndex instance, const exint &value)  override
    { doSetParmValue(idx, instance, value); }
    void setNestParmValue(TempIndex idx, TempIndex instance, const fpreal &value)  override
    { doSetParmValue(idx, instance, value); }
    void setNestParmValue(TempIndex idx, TempIndex instance, const UT_Vector2D &value)  override
    { doSetParmValue(idx, instance, value); }
    void setNestParmValue(TempIndex idx, TempIndex instance, const UT_Vector3D &value)  override
    { doSetParmValue(idx, instance, value); }
    void setNestParmValue(TempIndex idx, TempIndex instance, const UT_Vector4D &value)  override
    { doSetParmValue(idx, instance, value); }
    void setNestParmValue(TempIndex idx, TempIndex instance, const UT_Matrix2D &value)  override
    { doSetParmValue(idx, instance, value); }
    void setNestParmValue(TempIndex idx, TempIndex instance, const UT_Matrix3D &value)  override
    { doSetParmValue(idx, instance, value); }
    void setNestParmValue(TempIndex idx, TempIndex instance, const UT_Matrix4D &value)  override
    { doSetParmValue(idx, instance, value); }
    void setNestParmValue(TempIndex idx, TempIndex instance, const UT_StringHolder &value)  override
    { doSetParmValue(idx, instance, value); }
    void setNestParmValue(TempIndex idx, TempIndex instance, const UT_SharedPtr<UT_Ramp> &value)  override
    { doSetParmValue(idx, instance, value); }
    void setNestParmValue(TempIndex idx, TempIndex instance, const PRM_DataItemHandle &value)  override
    { doSetParmValue(idx, instance, value); }

    exint getNestNumParms(TempIndex idx) const override
    {
        if (idx.size() == 0)
            return 5;
        switch (idx[0])
        {

        }
        // Invalid
        return 0;
    }

    const char *getNestParmName(TempIndex fieldnum) const override
    {
        if (fieldnum.size() < 1)
            return 0;
        switch (fieldnum[0])
        {
            case 0:
                return "divs";
            case 1:
                return "rad";
            case 2:
                return "nradius";
            case 3:
                return "t";
            case 4:
                return "orient";

        }
        return 0;
    }

    ParmType getNestParmType(TempIndex fieldnum) const override
    {
        if (fieldnum.size() < 1)
            return PARM_UNSUPPORTED;
        switch (fieldnum[0])
        {
            case 0:
                return PARM_INTEGER;
            case 1:
                return PARM_VECTOR2;
            case 2:
                return PARM_INTEGER;
            case 3:
                return PARM_VECTOR3;
            case 4:
                return PARM_INTEGER;

        }
        return PARM_UNSUPPORTED;
    }

    // Boiler plate to load individual types.
    static void  loadData(UT_IStream &is, int64 &v)
    { is.bread(&v, 1); }
    static void  loadData(UT_IStream &is, bool &v)
    { int64     iv; is.bread(&iv, 1); v = iv; }
    static void  loadData(UT_IStream &is, fpreal64 &v)
    { is.bread<fpreal64>(&v, 1); }
    static void  loadData(UT_IStream &is, UT_Vector2D &v)
    { is.bread<fpreal64>(&v.x(), 1); is.bread<fpreal64>(&v.y(), 1); }
    static void  loadData(UT_IStream &is, UT_Vector3D &v)
    { is.bread<fpreal64>(&v.x(), 1); is.bread<fpreal64>(&v.y(), 1);
      is.bread<fpreal64>(&v.z(), 1); }
    static void  loadData(UT_IStream &is, UT_Vector4D &v)
    { is.bread<fpreal64>(&v.x(), 1); is.bread<fpreal64>(&v.y(), 1);
      is.bread<fpreal64>(&v.z(), 1); is.bread<fpreal64>(&v.w(), 1); }
    static void  loadData(UT_IStream &is, UT_Matrix2D &v)
    { for (int r = 0; r < 2; r++) for (int c = 0; c < 2; c++) is.bread<fpreal64>(&v(r, c), 1); }
    static void  loadData(UT_IStream &is, UT_Matrix3D &v)
    { for (int r = 0; r < 3; r++) for (int c = 0; c < 3; c++) is.bread<fpreal64>(&v(r, c), 1); }
    static void  loadData(UT_IStream &is, UT_Matrix4D &v)
    { for (int r = 0; r < 4; r++) for (int c = 0; c < 4; c++) is.bread<fpreal64>(&v(r, c), 1); }
    static void  loadData(UT_IStream &is, UT_Vector2I &v)
    { is.bread<int64>(&v.x(), 1); is.bread<int64>(&v.y(), 1); }
    static void  loadData(UT_IStream &is, UT_Vector3I &v)
    { is.bread<int64>(&v.x(), 1); is.bread<int64>(&v.y(), 1);
      is.bread<int64>(&v.z(), 1); }
    static void  loadData(UT_IStream &is, UT_Vector4I &v)
    { is.bread<int64>(&v.x(), 1); is.bread<int64>(&v.y(), 1);
      is.bread<int64>(&v.z(), 1); is.bread<int64>(&v.w(), 1); }
    static void  loadData(UT_IStream &is, UT_StringHolder &v)
    { is.bread(v); }
    static void  loadData(UT_IStream &is, UT_SharedPtr<UT_Ramp> &v)
    {   UT_StringHolder   rampdata;
        loadData(is, rampdata);
        if (rampdata.isstring())
        {
            v.reset(new UT_Ramp());
            UT_IStream  istr((const char *) rampdata, rampdata.length(), UT_ISTREAM_ASCII);
            v->load(istr);
        }
        else v.reset();
    }
    static void  loadData(UT_IStream &is, PRM_DataItemHandle &v)
    {   UT_StringHolder   data;
        loadData(is, data);
        if (data.isstring())
        {
            // Find the data type.
            const char *colon = UT_StringWrap(data).findChar(':');
            if (colon)
            {
                int             typelen = colon - data.buffer();
                UT_WorkBuffer   type;
                type.strncpy(data.buffer(), typelen);
                UT_IStream  istr(((const char *) data) + typelen + 1, data.length() - (typelen + 1), UT_ISTREAM_BINARY);
                
                v = PRM_DataFactory::parseBinary(type.buffer(), istr);
            }
        }
        else v.reset();
    }

    static void  saveData(std::ostream &os, int64 v)
    { UTwrite(os, &v); }
    static void  saveData(std::ostream &os, bool v)
    { int64 iv = v; UTwrite(os, &iv); }
    static void  saveData(std::ostream &os, fpreal64 v)
    { UTwrite<fpreal64>(os, &v); }
    static void  saveData(std::ostream &os, UT_Vector2D v)
    { UTwrite<fpreal64>(os, &v.x()); UTwrite<fpreal64>(os, &v.y()); }
    static void  saveData(std::ostream &os, UT_Vector3D v)
    { UTwrite<fpreal64>(os, &v.x()); UTwrite<fpreal64>(os, &v.y());
      UTwrite<fpreal64>(os, &v.z()); }
    static void  saveData(std::ostream &os, UT_Vector4D v)
    { UTwrite<fpreal64>(os, &v.x()); UTwrite<fpreal64>(os, &v.y());
      UTwrite<fpreal64>(os, &v.z()); UTwrite<fpreal64>(os, &v.w()); }
    static void  saveData(std::ostream &os, UT_Matrix2D v)
    { for (int r = 0; r < 2; r++) for (int c = 0; c < 2; c++) UTwrite<fpreal64>(os, &v(r, c)); }
    static void  saveData(std::ostream &os, UT_Matrix3D v)
    { for (int r = 0; r < 3; r++) for (int c = 0; c < 3; c++) UTwrite<fpreal64>(os, &v(r, c)); }
    static void  saveData(std::ostream &os, UT_Matrix4D v)
    { for (int r = 0; r < 4; r++) for (int c = 0; c < 4; c++) UTwrite<fpreal64>(os, &v(r, c)); }
    static void  saveData(std::ostream &os, UT_StringHolder s)
    { UT_StringWrap(s).saveBinary(os); }
    static void  saveData(std::ostream &os, UT_SharedPtr<UT_Ramp> s)
    {   UT_StringHolder         result;
        UT_OStringStream        ostr;
        if (s) s->save(ostr);
        result = ostr.str();
        saveData(os, result);
    }
    static void  saveData(std::ostream &os, PRM_DataItemHandle s)
    {   UT_StringHolder         result;
        UT_OStringStream        ostr;
        if (s) 
        {
            ostr << s->getDataTypeToken();
            ostr << ":";
            s->saveBinary(ostr);
        }
        result = ostr.str();
        saveData(os, result);
    }


    void         save(std::ostream &os) const
    {
        int32           v = version();
        UTwrite(os, &v);
        saveData(os, myDivs);
        saveData(os, myRad);
        saveData(os, myNradius);
        saveData(os, myT);
        saveData(os, myOrient);

    }

    bool         load(UT_IStream &is)
    {
        int32           v;
        is.bread(&v, 1);
        if (version() != v)
        {
            // Fail incompatible versions
            return false;
        }
        loadData(is, myDivs);
        loadData(is, myRad);
        loadData(is, myNradius);
        loadData(is, myT);
        loadData(is, myOrient);

        return true;
    }

    int64 getDivs() const { return myDivs; }
    void setDivs(int64 val) { myDivs = val; }
    int64 opDivs(const SOP_NodeVerb::CookParms &cookparms) const
    { 
        SOP_Node *thissop = cookparms.getNode();
        if (!thissop) return getDivs();
        int64 result;
        OP_Utils::evalOpParm(result, thissop, "divs", cookparms.getCookTime(), 0);
        return result;
    }
    UT_Vector2D getRad() const { return myRad; }
    void setRad(UT_Vector2D val) { myRad = val; }
    UT_Vector2D opRad(const SOP_NodeVerb::CookParms &cookparms) const
    { 
        SOP_Node *thissop = cookparms.getNode();
        if (!thissop) return getRad();
        UT_Vector2D result;
        OP_Utils::evalOpParm(result, thissop, "rad", cookparms.getCookTime(), 0);
        return result;
    }
    bool getNradius() const { return myNradius; }
    void setNradius(bool val) { myNradius = val; }
    bool opNradius(const SOP_NodeVerb::CookParms &cookparms) const
    { 
        SOP_Node *thissop = cookparms.getNode();
        if (!thissop) return getNradius();
        bool result;
        OP_Utils::evalOpParm(result, thissop, "nradius", cookparms.getCookTime(), 0);
        return result;
    }
    UT_Vector3D getT() const { return myT; }
    void setT(UT_Vector3D val) { myT = val; }
    UT_Vector3D opT(const SOP_NodeVerb::CookParms &cookparms) const
    { 
        SOP_Node *thissop = cookparms.getNode();
        if (!thissop) return getT();
        UT_Vector3D result;
        OP_Utils::evalOpParm(result, thissop, "t", cookparms.getCookTime(), 0);
        return result;
    }
    Orient getOrient() const { return Orient(myOrient); }
    void setOrient(Orient val) { myOrient = int64(val); }
    Orient opOrient(const SOP_NodeVerb::CookParms &cookparms) const
    { 
        SOP_Node *thissop = cookparms.getNode();
        if (!thissop) return getOrient();
        int64 result;
        OP_Utils::evalOpParm(result, thissop, "orient", cookparms.getCookTime(), 0);
        return Orient(result);
    }

private:
    int64 myDivs;
    UT_Vector2D myRad;
    bool myNradius;
    UT_Vector3D myT;
    int64 myOrient;

};
