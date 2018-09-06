//
// Copyright 2016 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
#ifndef WALTERUSDEXTRAS_GENERATED_EXPRESSION_H
#define WALTERUSDEXTRAS_GENERATED_EXPRESSION_H

/// \file walterUsdExtras/expression.h

#include "pxr/pxr.h"
#include ".//api.h"
#include "pxr/usd/usd/typed.h"
#include "pxr/usd/usd/prim.h"
#include "pxr/usd/usd/stage.h"
#include ".//tokens.h"

#include "pxr/base/vt/value.h"

#include "pxr/base/gf/vec3d.h"
#include "pxr/base/gf/vec3f.h"
#include "pxr/base/gf/matrix4d.h"

#include "pxr/base/tf/token.h"
#include "pxr/base/tf/type.h"

PXR_NAMESPACE_OPEN_SCOPE

class SdfAssetPath;

// -------------------------------------------------------------------------- //
// EXPRESSION                                                                 //
// -------------------------------------------------------------------------- //

/// \class WalterExpression
///
/// Reading and querying layers definitions.
///
class WalterExpression : public UsdTyped
{
public:
    /// Compile-time constant indicating whether or not this class corresponds
    /// to a concrete instantiable prim type in scene description.  If this is
    /// true, GetStaticPrimDefinition() will return a valid prim definition with
    /// a non-empty typeName.
    static const bool IsConcrete = false;

    /// Compile-time constant indicating whether or not this class inherits from
    /// UsdTyped. Types which inherit from UsdTyped can impart a typename on a
    /// UsdPrim.
    static const bool IsTyped = true;

    /// Construct a WalterExpression on UsdPrim \p prim .
    /// Equivalent to WalterExpression::Get(prim.GetStage(), prim.GetPath())
    /// for a \em valid \p prim, but will not immediately throw an error for
    /// an invalid \p prim
    explicit WalterExpression(const UsdPrim& prim=UsdPrim())
        : UsdTyped(prim)
    {
    }

    /// Construct a WalterExpression on the prim held by \p schemaObj .
    /// Should be preferred over WalterExpression(schemaObj.GetPrim()),
    /// as it preserves SchemaBase state.
    explicit WalterExpression(const UsdSchemaBase& schemaObj)
        : UsdTyped(schemaObj)
    {
    }

    /// Destructor.
    WALTERUSDEXTRAS_API
    virtual ~WalterExpression();

    /// Return a vector of names of all pre-declared attributes for this schema
    /// class and all its ancestor classes.  Does not include attributes that
    /// may be authored by custom/extended methods of the schemas involved.
    WALTERUSDEXTRAS_API
    static const TfTokenVector &
    GetSchemaAttributeNames(bool includeInherited=true);

    /// Return a WalterExpression holding the prim adhering to this
    /// schema at \p path on \p stage.  If no prim exists at \p path on
    /// \p stage, or if the prim at that path does not adhere to this schema,
    /// return an invalid schema object.  This is shorthand for the following:
    ///
    /// \code
    /// WalterExpression(stage->GetPrimAtPath(path));
    /// \endcode
    ///
    WALTERUSDEXTRAS_API
    static WalterExpression
    Get(const UsdStagePtr &stage, const SdfPath &path);


private:
    // needs to invoke _GetStaticTfType.
    friend class UsdSchemaRegistry;
    WALTERUSDEXTRAS_API
    static const TfType &_GetStaticTfType();

    static bool _IsTypedSchema();

    // override SchemaBase virtuals.
    WALTERUSDEXTRAS_API
    virtual const TfType &_GetTfType() const;

public:
    // --------------------------------------------------------------------- //
    // EXPRESSION 
    // --------------------------------------------------------------------- //
    /// The expression.
    ///
    /// \n  C++ Type: std::string
    /// \n  Usd Type: SdfValueTypeNames->String
    /// \n  Variability: SdfVariabilityVarying
    /// \n  Fallback Value: No Fallback
    WALTERUSDEXTRAS_API
    UsdAttribute GetExpressionAttr() const;

    /// See GetExpressionAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    WALTERUSDEXTRAS_API
    UsdAttribute CreateExpressionAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // GROUP 
    // --------------------------------------------------------------------- //
    /// The name of the group the expression belongs to.
    ///
    /// \n  C++ Type: std::string
    /// \n  Usd Type: SdfValueTypeNames->String
    /// \n  Variability: SdfVariabilityVarying
    /// \n  Fallback Value: No Fallback
    WALTERUSDEXTRAS_API
    UsdAttribute GetGroupAttr() const;

    /// See GetGroupAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    WALTERUSDEXTRAS_API
    UsdAttribute CreateGroupAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // ===================================================================== //
    // Feel free to add custom code below this line, it will be preserved by 
    // the code generator. 
    //
    // Just remember to: 
    //  - Close the class declaration with }; 
    //  - Close the namespace with PXR_NAMESPACE_CLOSE_SCOPE
    //  - Close the include guard with #endif
    // ===================================================================== //
    // --(BEGIN CUSTOM CODE)--

    // Building following structure:
    // {"layer": {"target": "shader"}}
    typedef std::unordered_map<std::string, SdfPath> AssignmentTargets;
    typedef std::unordered_map<std::string, AssignmentTargets> AssignmentLayers;

    std::string GetExpression() const;
    void SetExpression(const std::string& expression);

    // Get all the render layers and the shader assignments.
    AssignmentLayers GetLayers() const;
    void SetConnection(
            const std::string& layer,
            const std::string& target,
            const SdfPath& shader);
};

PXR_NAMESPACE_CLOSE_SCOPE

#endif
