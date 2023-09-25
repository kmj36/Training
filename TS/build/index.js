"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const crypto_1 = __importDefault(require("crypto"));
class Block {
    constructor(prevHash, height, data) {
        this.prevHash = prevHash;
        this.height = height;
        this.data = data;
        this.hash = Block.calculateHash(prevHash, height, data);
    }
    static calculateHash(prevHash, height, data) {
        const toHash = `${prevHash}${height}${data}`;
        return crypto_1.default.createHash("sha256").update(toHash).digest("hex");
    }
}
class BlockChain {
    constructor() {
        this.blocks = [];
    }
    getPrevHash() {
        if (this.blocks.length === 0)
            return "";
        return this.blocks[this.blocks.length - 1].hash;
    }
    getBlocks() {
        return this.blocks;
    }
    addBlock(data) {
        const newblock = new Block(this.getPrevHash(), this.blocks.length + 1, data);
        this.blocks.push(newblock);
    }
    getBlock() {
        return [...this.getBlocks()];
    }
}
const myBlockChain = new BlockChain();
myBlockChain.addBlock("hello");
myBlockChain.addBlock("bye bye");
myBlockChain.addBlock("lalala");
myBlockChain.getBlock().push(new Block("123", 123, "123"));
console.log(myBlockChain.getBlock());
