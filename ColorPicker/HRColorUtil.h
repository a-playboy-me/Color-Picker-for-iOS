/*-
 * Copyright (c) 2011 Ryota Hayashi
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR(S) ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR(S) BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * $FreeBSD$
 */

/////////////////////////////////////////////////////////////////////////////
//
// 0.0f~1.0fの値をとるRGBの構造体です
//
/////////////////////////////////////////////////////////////////////////////

typedef struct {
    CGFloat r;
    CGFloat g;
    CGFloat b;
} HRRGBColor __attribute__((deprecated));

/////////////////////////////////////////////////////////////////////////////
//
// 0.0f~1.0fの値をとるHSVの構造体です
//
/////////////////////////////////////////////////////////////////////////////

typedef struct {
    CGFloat h;
    CGFloat s;
    CGFloat v;
} HRHSVColor;

// 値のチェックしてません。数値として入れさせるなら自前でチェックして下さい。

/////////////////////////////////////////////////////////////////////////////
//
// 変換用の関数
//
/////////////////////////////////////////////////////////////////////////////

void HSVColorFromRGBColor(const HRRGBColor *, HRHSVColor *) __attribute__((deprecated));
void HSVColorFromUIColor(UIColor *, HRHSVColor *);
void RGBColorFromHSVColor(const HRHSVColor *, HRRGBColor *) __attribute__((deprecated));
void RGBColorFromUIColor(const UIColor *, HRRGBColor *) __attribute__((deprecated));

// 16進数のカラーコードを取得 (例:#ffffff)
// NSString* hexColorStr = [NSString stringWithFormat:@"#%06x",HexColorFromUIColor([UIColor redColor])]; で文字列に変換されます
int HexColorFromRGBColor(const HRRGBColor *) __attribute__((deprecated));
int HexColorFromUIColor(const UIColor *) __attribute__((deprecated));


// 同値チェック
bool HRHSVColorEqualToColor(const HRHSVColor *, const HRHSVColor *) __attribute__((deprecated));

// 0.0f~1.0fに納まるxとy、彩度の下限、輝度からHSVを求める
void HSVColorAt(HRHSVColor *hsv, CGFloat x, CGFloat y, CGFloat saturationLowerLimit, CGFloat brightness) __attribute__((deprecated));

