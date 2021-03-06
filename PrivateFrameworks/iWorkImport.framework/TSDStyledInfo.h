/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSDReflection, TSDShadow, TSDStroke, TSSStyle;

@interface TSDStyledInfo : TSDDrawableInfo <TSSStyleClient> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property float opacity;
@property(copy) TSDReflection * reflection;
@property(copy) TSDShadow * shadow;
@property(copy) TSDStroke * stroke;
@property(retain) TSSStyle * style;
@property(readonly) Class superclass;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)boxedValueForProperty:(int)arg1;
- (id)commandForPasteStyleWithContext:(id)arg1 pasteboardStyles:(id)arg2;
- (id)commandForSettingBoxedValue:(id)arg1 forProperty:(int)arg2;
- (id)commandForTransformingByTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (void)i_setValue:(id)arg1 forProperty:(int)arg2;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (id)objectForProperty:(int)arg1;
- (float)opacity;
- (id)propertyMapForNewPreset;
- (id)referencedStyles;
- (id)reflection;
- (void)replaceReferencedStylesUsingBlock:(id)arg1;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (void)setOpacity:(float)arg1;
- (void)setReflection:(id)arg1;
- (void)setShadow:(id)arg1;
- (void)setStroke:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setValuesForProperties:(id)arg1;
- (id)shadow;
- (id)stroke;
- (id)style;
- (Class)styleClass;
- (id)styleIdentifierTemplateForNewPreset;
- (id)stylesForCopyStyle;

@end
