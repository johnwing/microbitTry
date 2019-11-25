//% weight=0 color=#3CB371 icon="\uf0ad" block="Tools"
namespace tools {
    /**
    * 計算長方形面積，並回傳
    */
    //% blockId="areaOfRectangle" block="area of rectangle length %length|width %width"
    //% blockGap=2 weight=0 blockExternalInputs=true
    export function areaOfRectangle(length: number, width:number): number {
        return length*width
    }
    /**
    * 計算長方形面積，不回傳，只顯示在LED
    */
    //% shim=tools::obloqDisDisplay
    //% blockId="obloqDisDisplay" block="area of rectangle"
    //% blockGap=2 weight=0 blockExternalInputs=true
    function obloqDisDisplay(): void {
        return
    }
}