export const WriteResults = {
  SUCCESS: 'SUCCESS',
  FAILED: 'FAILED',
  UNCHANGED: 'UNCHANGED',
} as const;
export type WriteResult = keyof typeof WriteResults;
