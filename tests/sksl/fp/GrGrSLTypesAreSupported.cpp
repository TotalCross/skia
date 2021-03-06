

/**************************************************************************************************
 *** This file was autogenerated from GrGrSLTypesAreSupported.fp; do not modify.
 **************************************************************************************************/
#include "GrGrSLTypesAreSupported.h"

#include "src/core/SkUtils.h"
#include "src/gpu/GrTexture.h"
#include "src/gpu/glsl/GrGLSLFragmentProcessor.h"
#include "src/gpu/glsl/GrGLSLFragmentShaderBuilder.h"
#include "src/gpu/glsl/GrGLSLProgramBuilder.h"
#include "src/sksl/SkSLCPP.h"
#include "src/sksl/SkSLUtil.h"
class GrGLSLGrSLTypesAreSupported : public GrGLSLFragmentProcessor {
public:
    GrGLSLGrSLTypesAreSupported() {}
    void emitCode(EmitArgs& args) override {
        GrGLSLFPFragmentBuilder* fragBuilder = args.fFragBuilder;
        const GrGrSLTypesAreSupported& _outer = args.fFp.cast<GrGrSLTypesAreSupported>();
        (void) _outer;
        SkString test_i_name = fragBuilder->getMangledFunctionName("test_i");
        const GrShaderVar test_i_args[] = { GrShaderVar("a", kInt_GrSLType) };
        SkString test_i2_name = fragBuilder->getMangledFunctionName("test_i2");
        const GrShaderVar test_i2_args[] = { GrShaderVar("a", kInt2_GrSLType) };
        SkString test_i3_name = fragBuilder->getMangledFunctionName("test_i3");
        const GrShaderVar test_i3_args[] = { GrShaderVar("a", kInt3_GrSLType) };
        SkString test_i4_name = fragBuilder->getMangledFunctionName("test_i4");
        const GrShaderVar test_i4_args[] = { GrShaderVar("a", kInt4_GrSLType) };
        SkString test_h3x3_name = fragBuilder->getMangledFunctionName("test_h3x3");
        const GrShaderVar test_h3x3_args[] = { GrShaderVar("a", kHalf3x3_GrSLType) };
        SkString test_f2x2_name = fragBuilder->getMangledFunctionName("test_f2x2");
        const GrShaderVar test_f2x2_args[] = { GrShaderVar("a", kFloat2x2_GrSLType) };
        fragBuilder->emitFunction(kInt_GrSLType, test_i_name.c_str(), {test_i_args, 1},
R"SkSL(for (; ; ) {
    return a;
}
)SkSL");
        fragBuilder->emitFunction(kInt2_GrSLType, test_i2_name.c_str(), {test_i2_args, 1},
R"SkSL(for (; ; ) {
    return a;
}
)SkSL");
        fragBuilder->emitFunction(kInt3_GrSLType, test_i3_name.c_str(), {test_i3_args, 1},
R"SkSL(for (; ; ) {
    return a;
}
)SkSL");
        fragBuilder->emitFunction(kInt4_GrSLType, test_i4_name.c_str(), {test_i4_args, 1},
R"SkSL(for (; ; ) {
    return a;
}
)SkSL");
        fragBuilder->emitFunction(kHalf3x3_GrSLType, test_h3x3_name.c_str(), {test_h3x3_args, 1},
R"SkSL(for (; ; ) {
    return a;
}
)SkSL");
        fragBuilder->emitFunction(kFloat2x2_GrSLType, test_f2x2_name.c_str(), {test_f2x2_args, 1},
R"SkSL(for (; ; ) {
    return a;
}
)SkSL");
        fragBuilder->codeAppendf(
R"SkSL(return ((((((int4(%s(1)) , %s(int2(1)).xxxx) , %s(int3(1)).xxxx) , %s(int4(1)).xxxx) , %s(half3x3(1.0))[0]) , %s(float2x2(1.0))[0]) , half4(1.0));
)SkSL"
, test_i_name.c_str(), test_i2_name.c_str(), test_i3_name.c_str(), test_i4_name.c_str(), test_h3x3_name.c_str(), test_f2x2_name.c_str());
    }
private:
    void onSetData(const GrGLSLProgramDataManager& pdman, const GrFragmentProcessor& _proc) override {
    }
};
GrGLSLFragmentProcessor* GrGrSLTypesAreSupported::onCreateGLSLInstance() const {
    return new GrGLSLGrSLTypesAreSupported();
}
void GrGrSLTypesAreSupported::onGetGLSLProcessorKey(const GrShaderCaps& caps, GrProcessorKeyBuilder* b) const {
}
bool GrGrSLTypesAreSupported::onIsEqual(const GrFragmentProcessor& other) const {
    const GrGrSLTypesAreSupported& that = other.cast<GrGrSLTypesAreSupported>();
    (void) that;
    return true;
}
GrGrSLTypesAreSupported::GrGrSLTypesAreSupported(const GrGrSLTypesAreSupported& src)
: INHERITED(kGrGrSLTypesAreSupported_ClassID, src.optimizationFlags()) {
        this->cloneAndRegisterAllChildProcessors(src);
}
std::unique_ptr<GrFragmentProcessor> GrGrSLTypesAreSupported::clone() const {
    return std::make_unique<GrGrSLTypesAreSupported>(*this);
}
#if GR_TEST_UTILS
SkString GrGrSLTypesAreSupported::onDumpInfo() const {
    return SkString();
}
#endif
