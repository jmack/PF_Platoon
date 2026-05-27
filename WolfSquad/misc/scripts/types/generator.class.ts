import { dirname } from 'path';
import { fileURLToPath } from 'url';

export abstract class BaseGenerator {
  protected abstract template: string;
  protected scriptDir: string;
  protected progressPrintStart: number = `${this.constructor.name}: `.length;

  protected startTime?: number;
  protected endTime?: number;

  constructor(url: string) {
    this.scriptDir = dirname(fileURLToPath(url));
  }

  protected abstract generate(params?: any[]): Promise<void>;

  public async execute(params: any[] = []): Promise<void> {
    process.stdout.write(`${this.constructor.name}:   0%`);
    this.startTime = Date.now();
    await this.generate(params);
    this.endTime = Date.now();
    this.showCompleted();
  }

  protected showProgress(percent: number): void {
    process.stdout.cursorTo(this.progressPrintStart);
    const percentString = Math.round(percent).toString();
    process.stdout.write(`${percentString.padStart(3, ' ')}%`);
  }

  // defined so that children can overwrite if desired
  protected showCompleted(): void {
    if (this.startTime == undefined || this.endTime == undefined) {
      throw Error('showCompleted called when start or end time not filled!');
    }
    this.showProgress(100);
    process.stdout.write(` (${(this.endTime - this.startTime) / 1000}s)`);
    process.stdout.write('\n');
  }
}
